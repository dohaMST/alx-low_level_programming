#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: the minimum limit
 * @max: the max limit
 * Return:  pointer to the newly created array or NULL
 */

int *array_range(int min, int max)
{
	int *arr;
	int a, length;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	arr = malloc(sizeof(int) * length);
	if (!arr)
		return (NULL);
	for (a = 0; min <= max; a++)
		arr[a] = min++;
	return (arr);
}
