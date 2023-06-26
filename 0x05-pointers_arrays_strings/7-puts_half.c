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
	if (n % 2 != 0)
		n--;
	for (i = n / 2; i < n; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
