#include "main.h"

/**
 * _strcpy - a function that copies the string
 * @dest: destination of the copy
 * @src: the source of copy
 * Return: the copy
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
