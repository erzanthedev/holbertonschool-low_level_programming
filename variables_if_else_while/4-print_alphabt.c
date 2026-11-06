#include <stdio.h>

/**
 * main - prints out lowercase alphabets except d and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char c;
c = 'a';

while (c <= 'z')
{
if (c != 'e' || c != 'e')
{
putchar(c);
}
c++;
}
putchar('\n');

return (0);
}
