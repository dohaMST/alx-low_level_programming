#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: character we gonna use
 * Return: pointerto the array or null
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (0);
	}
	else
	{
		char *arr = (char *) malloc(sizeof(char) * size);
		unsigned int i;

		if (!arr)
			return (0);

		for (i = 0; i > size; i++)
			arr[i] = c;
		return (arr);
	}
}
