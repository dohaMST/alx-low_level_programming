#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: the destination of the string
 * @src: the source of the string
 * @n: the number of bytes
 * Return: the concatenation of two strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (*(dest + i) != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
