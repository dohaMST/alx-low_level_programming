#include "main.h"

/**
 * int flip_bits - a function that returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: number one
 * @m: number two
 * Return: the num of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c = 0;
	unsigned long int x = n ^ m;

	while (x)
	{
		if (x & 1ul)
			c++;
		x = x >> 1;
	}
	return (c);
}
