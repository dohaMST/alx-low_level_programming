#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: array of numbers
 * @size: the size of array
 * @cmp: pointer to a function to be used to compare value
 * Return: the index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
