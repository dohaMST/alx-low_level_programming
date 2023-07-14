#include "main.h"
#include <stdlib.h>

/**
 * *_set_memoire - make a memory with a fix bytes
 * @str: memory area
 * @copy: char to copy
 * @num:  number of times we gonna copy
 * Return: pointer
 */
char *_set_memoire(char *str, char copy, unsigned int num)
{
	unsigned int a;

	for (a = 0; a < num; a++)
	{
		str[a] = copy;
	}

	return (str);
}

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @size: size of bytes
 * @nmemb: number of members in the array
 * Return: a pointer to the allocated memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);
	_set_memoire(arr, 0, nmemb * size);
	return (arr);
}
