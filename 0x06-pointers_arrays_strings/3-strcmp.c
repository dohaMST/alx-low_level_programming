#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: the first string we gonna compare
 * @s2: the second string we gonna compare
 * Return: an integer
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (15);
		else if (s1[i] < s2[i])
			return (-15);
		i++;
	}
	if (s1[i] != '\0' && s2[i] != '\0')
		return (15);
	else if (s1[i] != '\0' && s2[i] != '\0')
		return (-15);
	return (0);
}
