#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: the string to encode
 *
 * Return: pointer to s
 */
char *leet(char *s)
{
	int i;
	int j;
	char *letters = "aAeEoOtTlL";
	char *codes = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = codes[j];
				break;
			}
		}
	}

	return (s);
}
