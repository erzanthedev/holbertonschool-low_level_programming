#include <stdio.h>

/**
 * print_table - prints a multiplication table of the given size
 * @size: The number of rows and columns
 *
 * Return: void
 */
void print_table(int size)
{
	int row, col;

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size; col++)
		{
			printf("%d ", row * col);
		}
		printf("\n");
	}
}

/* -- DO NOT Modify the code below this line -- */

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	print_table(4);
	return (0);
}
