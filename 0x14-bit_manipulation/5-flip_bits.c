#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: number one
 * @m: number two
 * Return: the num of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, c = 0;
	unsigned long int curr;
	unsigned long int x = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = x >> i;
		if (curr & 1)
			c++;
	}

	return (c);
}

