#include "main.h"
/**
 * print_most_numbers - print numbers but 2 and 4
 */

void print_most_numbers(void)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
		if (i == "2" || i == "4")
			continue;
		else
			_putchar(i);
	}
	_putchar('\n');
}
