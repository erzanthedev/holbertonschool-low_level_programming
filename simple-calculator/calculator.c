#include <stdio.h>

/**
 * printMenu - Prints the calculator menu
 */
void printMenu(void)
{
	puts("Simple Calculator");
	puts("1) Add");
	puts("2) Subtract");
	puts("3) Multiply");
	puts("4) Divide");
	puts("0) Quit");
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int choice;
	int num1;
	int num2;
	int result;

	do {
		printMenu();
		printf("Choice: ");
		scanf("%d", &choice);

		if (choice == 0)
		{
			puts("Bye!");
		}
		else if (choice < 0 || choice > 4)
		{
			printf("Invalid choice\n");
		}
		else if (choice >= 1 && choice <= 4)
		{
			printf("A: ");
			scanf("%d", &num1);
			printf("B: ");
			scanf("%d", &num2);

			if (choice == 1)
			{
				result = num1 + num2;
			}
			else if (choice == 2)
			{
				result = num1 - num2;
			}
			printf("Result: %d \n", result);
		}
	} while (choice != 0);
	return (0);
}
