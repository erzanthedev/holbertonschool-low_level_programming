# Green Efficiency Analysis

## Measurement Methodology

All programs were compiled with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long` and run on the same machine. Execution time was measured inside each program with `clock()` from `<time.h>`, converted to seconds by dividing by `CLOCKS_PER_SEC`. The baseline loop (100,000,000 iterations) and the algorithm comparison were each run three times. The instrumentation program was run once. It timed three phases (BUILD_DATA, PROCESS, REDUCE) plus a TOTAL wrapping all three. Each timed region wraps exactly one function call, so printing is excluded from the measurements.

## Observed Performance Differences

The baseline loop took 0.134241, 0.094481 and 0.094025 seconds, averaging 0.107582 seconds. The first run was about 43% slower than the fastest, while the last two differed by only 0.000456 seconds. Identical work does not produce identical timings.

In the comparison program, the naive algorithm took 2.202978, 2.160859 and 2.174782 seconds (average 2.179540). The single-pass algorithm took 0.000089, 0.000086 and 0.000086 seconds (average 0.000087). The naive version was about 25,052 times slower. This matches the code: the naive inner loop runs i + 1 times for each i, about 1.25 billion checks for 50,000 elements, while single-pass makes 50,000 checks, a ratio near 25,000.

In the instrumented run, BUILD_DATA took 0.000431, PROCESS 0.000555 and REDUCE 0.000266 seconds, against a TOTAL of 0.001263. PROCESS was the largest share at roughly 44%. The three phases sum to 0.001252 seconds, so about 0.000011 seconds was overhead from the extra timer calls.

## Relation Between Runtime and Energy Consumption

This project did not measure power in watts, so no energy figures are claimed. Runtime is used as a proxy: a program that keeps the CPU busy for longer generally consumes more energy. On that basis, the naive algorithm kept the CPU busy for about 2.18 seconds, while the single-pass version finished in 0.000087 seconds, so the naive version would be expected to cost far more energy. The proxy is imperfect, because power draw also depends on the instructions executed and the CPU's frequency state.

## Limitations of the Experiment

- **Timer resolution:** The single-pass runs and every instrumented phase are well under a millisecond, close to the resolution and noise of `clock()`. The difference between 0.000089 and 0.000086 seconds is not meaningful.
- **Small sample:** Only three runs were taken for the baseline and comparison, and one for instrumentation. The baseline's first run (0.134241 seconds) was an outlier, and its cause was not investigated.
- **CPU time, not energy:** `clock()` reports processor time, so energy conclusions rest on the runtime proxy alone.
- **Different outputs:** The two algorithms returned different results (625025000 and 25000), so the comparison measures the cost of the provided implementations, not two identical computations.
- **Single machine:** Background processes on the test machine may have affected the timings.

## Practical Engineering Takeaway

Algorithm choice dominated everything else measured. Replacing the quadratic approach with a linear one gave a gain of about 25,000 times, far larger than the run-to-run variation seen in the naive runs (about 2%) or the baseline (up to 43%). Measure before optimizing, repeat runs and average them, and instrument phases to see where time goes, as with PROCESS here. Reducing runtime is a reasonable first step toward lower energy use, even though energy itself was not measured.
