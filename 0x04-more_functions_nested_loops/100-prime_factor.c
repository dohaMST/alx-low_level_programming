#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	long int p = 1, i;

	for (i = 1; i < 612852475143; i++)
		if (612852475143 % i == 0)
			if (i > p)
				p = i;
	printf("%ld", p);
	return (0);
}
