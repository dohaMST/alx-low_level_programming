#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @str: the string we gonna work with
 * Return: string
 */

char *leet(char *str)
{
	int i = 0, j;
	char aide1[] = "aAeEoOtTlL",
	     aide2[] = "4433007711";

	while (str[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == aide1[j])
				str[i] = aide2[j];
		}
		i++;
	}
	return (str);
}
