#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to check
 * @accept: the allowed bytes
 *
 * Return: number of initial bytes of s made only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	int j;
	int found;

	for (count = 0; s[count] != '\0'; count++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[count] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found == 0)
			break;
	}

	return (count);
}
