#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: the string we gonna calcule its length
 *Return: the length
 */

int _strlen(char *s)
{
	int n = 0, i = 0;

	while (*(s + i) != '\0')
	{
		i++;
		n++;
	}
	return (n);
}
