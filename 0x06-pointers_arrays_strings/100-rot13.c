#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @str: the string we gonne work with
 * Return: string
 */

char *rot13(char *str)
{
	int i;
	int j;
	char array[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == array[j])
			{
				str[i] = rot[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
