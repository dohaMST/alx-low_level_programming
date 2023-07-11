#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  a function that concatenates two strings.
 * @s1: the string number 1
 * @s2: the string number 2
 * Return: pointer should point to concatenation of 2 strings
 * or Null
 */

char *str_concat(char *s1, char *s2)
{
	int n1 = 0, n2 = 0, a = 0, b = 0;
	char *str;

	while (s1[n1])
		n1++;
	while (s2[n2])
		n2++;
	str = (char *) malloc(sizeof(char) * (n1 + n2 + 1));
	if (!str)
		return (NULL);
	while (s1[a])
	{
		str[a] = s1[a];
		a++;
	}
	while (s2[b])
	{
		str[a] = s2[b];
		a++;
		b++;
	}
	str[a] = '\0';
	return (str);
}
