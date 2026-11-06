#include <stdio.h>

/**
 * main - prints out numbers between 0 and 10 using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
i = 0;

while (i < 10)
{
putchar(i + '0');
i++;
}
putchar('\n');

return (0);
}
