#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: the string we gonna print
 */

void puts2(char *str)
{
	int i = 0, n = 0;

	while (*(str + i) != '\0')
	{
		n++;
		i++;
	}

	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0)
			_putchar(*(str + i));

	}
	_putchar('\n');
}
