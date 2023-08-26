#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: number
*/

void print_binary(unsigned long int n)
{
	int i, x = 0;
	unsigned long int curr;

	for (i = 63; i >= 0; i--)
	{
		curr = n >> i;
		if (curr & 1)
		{
			put_char('1');
			x++;
		}
		else if (x)
			put_char('0');
	}
	if (!x)
		put_char('0');
}
