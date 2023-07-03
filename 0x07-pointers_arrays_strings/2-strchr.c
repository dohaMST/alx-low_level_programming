#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s:the string we will work with
 * @c: the character we wanna locate
 * Return: a pointer to string
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
