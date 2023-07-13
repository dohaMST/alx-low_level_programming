#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes of s2
 * Return: a pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1 = 0, l2 = 0, lTotal, a = 0, b = 0;
	char *string;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;
	if (n < l2)
		lTotal = l1 + n;
	else
		lTotal = l2 + l1;
	string = (char *) malloc(sizeof(char) * (lTotal + 1));
	if (!string)
		return (NULL);
	while (s1[a])
	{
		string[a] = s1[a];
		a++;
	}
	while (n < l2 && b < n)
	{
		string[a++] = s2[b++];
	}
	while (n > l2 && a < l1 + l2)
	{
		string[a++] = s2[b++];
	}
	string[a] = '\0';
	return (string);
}
