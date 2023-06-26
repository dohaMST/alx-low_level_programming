#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: the string we gonna reverse
 */

void print_rev(char *s)
{
	int i = 0, n = 0;

	while (*(s + i) != '\0')
	{
		n++;
		i++;
	}

	for (i = n; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
