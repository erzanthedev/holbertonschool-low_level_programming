#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Calculator Program */
	int choice;

	puts("Simple Calculator");
	puts("1) Add");
	puts("2) Subtract");
	puts("3) Multiply");
	puts("4) Divide");
	puts("0) Quit");
	puts("Choice: ");
	scanf("%d", &choice);

	if (choice == 0)
	{
		puts("Bye!");
	}

	return (0);
}
