#include "main.h"

/**
 * _atoi - a function that convert a string to an integer
 * @s: the string we gonna convert
 *Return: the integer
 */

int _atoi(char *s)
{
	int sig = 1, num = 0, i = 0;

	while (*(s + i) != '\0')
	{
		if (*s == '-')
		{
			sig *= -1;
		}
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			num = num * 10 + *(s + i) - '0';
		}
		else if (num > 0)
			break;
		i++;
	}

	num = num * sig;
	return (num);
}
