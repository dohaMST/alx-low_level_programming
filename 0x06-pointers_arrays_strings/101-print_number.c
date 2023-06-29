#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: the number we gonna print
 */

void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		x = -n;
	}
	else
		x = n;
	if (x / 10 != 0)
	{
		print_number(x / 10);
	}
	_putchar((x % 10) + '0');
}
