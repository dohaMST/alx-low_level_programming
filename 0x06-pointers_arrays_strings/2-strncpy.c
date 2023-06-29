#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: the destination of string
 * @src: the source of string
 * @n: the number of bytes
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
