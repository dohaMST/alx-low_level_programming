#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: a pointer to string on which the search is performed.
 * @accept: string containing the set of characters to be searched for
 * Return:the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		int a = 0;
		int j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				a = 1;
				break;
			}

			j++;
		}
		if (!a)
			return (count);

		count++;
		i++;
	}

	return (count);
}
