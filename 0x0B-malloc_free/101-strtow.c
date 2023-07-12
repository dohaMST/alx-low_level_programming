#include <stdlib.h>
#include "main.h"

/**
 * wcount - count words
 * @str: the string we gonna use
 * Return: number of words
 */

int wcount(char *str)
{
	int i = 0, num, mots = 0;

	for (num = 0; str[num] != '\0'; num++)
	{
		if (str[num] == ' ')
			i = 0;
		else if (i == 0)
		{
			i = 1;
			mots++;
		}
	}

	return (mots);
}

/**
 * strtow - a function that splits a string into words
 * @str: the string we gonaa use
 * Return: pointer to an array of strings or NULL
 */
char **strtow(char *str)
{
	char **arr, *help;
	int a, k = 0, length = 0, mots, c = 0, debut, fin;

	while (*(str + length))
		length++;
	mots = wcount(str);
	if (mots == 0)
		return (NULL);

	arr = (char **) malloc(sizeof(char *) * (mots + 1));
	if (arr == NULL)
		return (NULL);

	for (a = 0; a <= length; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				fin = a;
				help = (char *) malloc(sizeof(char) * (c + 1));
				if (help == NULL)
					return (NULL);
				while (debut < fin)
					*help++ = str[debut++];
				*help = '\0';
				arr[k] = help - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			debut = a;
	}

	arr[k] = NULL;

	return (arr);
}

