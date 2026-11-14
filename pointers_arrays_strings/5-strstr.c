#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to search
 * @needle: the substring to find
 *
 * Return: pointer to the start of the substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int j;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		j = 0;
		while (needle[j] != '\0' && haystack[j] == needle[j])
			j++;

		if (needle[j] == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
