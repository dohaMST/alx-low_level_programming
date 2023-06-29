#include "main.h"
#include <stdio.h>

/**
 * print_buffer - a function that prints a buffer
 * @b: the buffer
 * @size:the bytes of the buffer
 */

void print_buffer(char *b, int size)
{
	int a = 0, j, i;

	if (size <= 0)
	{
		printf("\n");
		return (NULL);
	}
	while (a < size)
	{
		if (size - a < 10)
			j = size - a;
		else
			j = 10;
		printf("%08x: ", a);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + i + a));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int aide = *(b + a + i);

			if (aide < 32 || aide > 132)
			{
				aide = '.';
			}
			printf("%c", aide);
		}
		printf("\n");
		a += 10;
	}
}
