#include "main.h"

/**
 * is_separator - checks if a character separates words
 * @c: the character to check
 *
 * Return: 1 if c is a separator, 0 otherwise
 */
static int is_separator(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';')
		return (1);
	if (c == '.' || c == '!' || c == '?' || c == '"' || c == '(')
		return (1);
	if (c == ')' || c == '{' || c == '}')
		return (1);

	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @s: the string
 *
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0 || is_separator(s[i - 1]))
				s[i] -= 32;
		}
	}

	return (s);
}
