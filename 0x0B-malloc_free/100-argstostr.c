#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: size of array of argument
 * @av: array of arguments
 * Return:  pointer to a new string, or NULL
 */

char *argstostr(int ac, char **av)
{
	int i, j, x = 0, length = 0;
	char *arr;

	if (!ac || !av)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			length++;
			j++;
		}
	}
	length += ac;
	arr = malloc(sizeof(char) * (length + 1));

	if (!arr)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			arr[x] = av[i][j];
			x++;
			j++;
		}
		if (arr[x] == '\0')
			arr[x++] = '\n';
	}
	return (arr);
}
