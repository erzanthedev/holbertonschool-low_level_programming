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

	do {
		/* Menu */
		puts("Simple Calculator");
		puts("1) Add");
		puts("2) Subtract");
		puts("3) Multiply");
		puts("4) Divide");
		puts("0) Quit");

		/* User Input */
		printf("Choice: ");
		scanf("%d", &choice);

		/* checks to quit program */
		if (choice == 0)
		{
			puts("Bye!");
		}
		else if (choice < 0 || choice > 4)
		{
			printf("Invalid choice\n");
		}
	} while (choice != 0);
	return (0);
}
