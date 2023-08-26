#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need
 * to flip to get from one number to another
 * @n: num 1
 * @m: num 2
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, x = 0;
	unsigned long int curr;
	unsigned long int ex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = ex >> i;
		if (curr & 1)
			x++;
	}
	return (x);
}
