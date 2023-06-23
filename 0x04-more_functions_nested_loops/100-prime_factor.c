#include <stdio.h>
#include "main.h"
/**
 * square - return square on a number
 * @num: number we want its square
 * Return: its square
 */

double square(double num)
{
	float s, t;

	s = num / 2;

	t = 0;

	while (s != t)
	{
		t = s;
		s = (num / t + t) / 2;
	}
	return (s);
}





/**
 * largest_prime_factor - Entry point
 * @num: the number we gonnq use
 */

void largest_prime_factor(long int num)
{
	long int p = -1, i;

	while (num % 2 == 0)
	{
		p = 2;
		num /= 2;
	}

	for (i = 3; i < square(num); i += 2)
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
}

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	largest_prime_factor(612852475143);
	return (0);
}

