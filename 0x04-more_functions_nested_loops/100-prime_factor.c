#include <math.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	long int p = -1, i, num = 612852475143;

	while (num % 2 == 0)
	{
		p = 2;
		num /= 2;
	}

	for (i = 3; i < sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			p = i;
			num = num / i;
		}
	}
	if (num > 2)
		p = num;
	printf("%ld", p);
	return (0);
}
