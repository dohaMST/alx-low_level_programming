#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: the string we gonna use
 * Return: a pointer to the duplicated string or NULL
 */

char *_strdup(char *str)
{
	int n = 0, i = 0;
	char *str2;

	if (!str)
		return (NULL);

	while (str[n])
		n++;

	str2 = (char *) malloc(sizeof(char) * (n + 1));

	if (!str2)
		return (NULL);
	while (str[i])
	{
		str2[i] = str[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}
