#include <stdio.h>

/**
 * main - prints out alphabet using while loop
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

char c;
c = 'a';

while (c <= 'z')
{
putchar(c);
c++;
}

putchar('\n');
return (0);
}
