#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - function will print all numbers from n to 98
 * @n: the number we will start with
 */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
		}
	} else if (n >= 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j > 98)
				printf("%d, ", j);
			else
				printf("%d\n", j);
		}
	}
}
