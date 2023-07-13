#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size:  the new size, in bytes of the new memory block
 * Return: return pointer or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *arr, *past_arr;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(sizeof(char) * new_size));

	arr = malloc(sizeof(char) * new_size);
	if (!arr)
		return (NULL);

	past_arr = ptr;

	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			arr[a] = past_arr[a];
	}

	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			arr[a] = past_arr[a];
	}

	free(ptr);
	return (arr);
}
