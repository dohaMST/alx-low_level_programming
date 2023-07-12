#include "main.h"
#include <stdlib.h>
/**
 * wcount - count words
 * @str: the string we gonna use
 * Return: number of words
 */

int wcount(char *str)
{
	int i, word = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
				word++;
		}
		else if (i == 0)
		{
			word++;
		}
	}
	word++;
	return (word);
}

/**
 * strtow - a function that splits a string into words
 * @str: the string we gonaa use
 * Return: pointer to an array of strings or NULL
 */

char **strtow(char *str)
{
	int a = 0, b = 1, c, length, num = 0, count = 0;
	char **arr;

	if (!str || *str == '\0')
		return (NULL);
	num = wcount(str);
	if (num == 1)
		return (NULL);
	arr = (char **) malloc(sizeof(char *) * num);
	if (!arr)
		return (NULL);
	arr[num - 1] = NULL;
	while (str[a])
	{
		if (str[a] != ' ' && (a == 0 || str[a - 1] == ' '))
		{
			while (str[a + b] != ' ' && str[a + b])
				b++;
			b++;
			arr[count] = (char *) malloc(sizeof(char) * b);
			b--;
			if (arr[count] == NULL)
			{
				for (c = 0; c < count; c++)
					free(arr[c]);
				free(arr[num - 1]);
				free(arr);
				return (NULL);
			}
			for (length = 0; length < b; length++)
				arr[count][length] = str[a + length];
			arr[count][length] = '\0';
			count++;
			a += b;
		}
		else
		a++;
	}
	return (arr);
}
