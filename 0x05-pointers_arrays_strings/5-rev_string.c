#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: the string we gonna reverse
 */

void rev_string(char *s)
{
	int i = 0, j, n = 0;
	char aide;

	while (*(s + i) != '\0')
	{
		n++;
		i++;
	}
	n--;
	for (i = n, j = 0; i > j; i--, j++)
	{
		aide = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = aide;
	}
}
