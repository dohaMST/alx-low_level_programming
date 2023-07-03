#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: string number 1
 * @needle: string number 2
 * Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (haystack[i] != '\0')
	{
		int j = 0;

		while (needle[j] != '\0' && haystack[j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return (&haystack[i]);
		haystack++;
	}
	return (0);
}
