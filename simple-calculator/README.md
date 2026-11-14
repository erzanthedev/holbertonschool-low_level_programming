# Simple Calculator

A terminal-based interactive calculator written in C.

### Setup

Prints a welcome line, shows the menu, and quits on `0`.

### Menu Loop

Repeats the menu until quit and prints `Invalid choice` for numbers not in the menu.

### Addition
Prompts for `A` and `B`, then prints `A + B`.

### Subtraction
Prompts for `A` and `B`, then prints `A - B`.

### Multiplication
Prompts for `A` and `B`, then prints `A * B`.

### Division
Prompts for `A` and `B`, then prints `A / B`, or `Error: division by zero` if `B` is `0`.

## Numeric Behavior

All operands and results are decimals (`double`).
Results print with `%g`, so whole numbers show without decimals. 

## Known Limitations

- Non-numeric input such as `x` or `1abc` is not handled and can cause a loop forever.
- Results with more than 6 significant digits may print in scientific notation.
