#include "main.h"
#include <stdio.h>

/**
 * print_buffer - a function that prints a buffer
 * @b: the buffer
 * @size:the bytes of the buffer
 */

void print_buffer(char *b, int size)
{
	int debut, fin;

	if (size > 0)
		for (debut = 0; debut < size; debut += 10)
		{
			if (size - debut < 10)
				fin = size - debut;
			else
				fin = 10;
			printf("%08x : ", debut);
			printHexes(b, debut, fin);
			printASCII(b, debut, fin);
			printf("\n");
		}
	else
		printf("\n");
}
