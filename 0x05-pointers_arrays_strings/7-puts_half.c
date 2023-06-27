#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: the string we gonna print half of it
 */

void puts_half(char *str)
{
	int i = 0, n = 0;

	while (*(str + i) != '\0')
	{
		n++;
		i++;
	}
	n++;
	for (i = n / 2; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
