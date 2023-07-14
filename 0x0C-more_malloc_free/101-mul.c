#include "main.h"
#include <stdlib.h>

/**
 * _string - prints a string
 * @string: the string we gonna use
 */

void _string(const char *string)
{
	int a = 0;

	while (string[a])
	{
		_putchar(string[a]);
		a++;
	}
}

/**
 * ecrire_num - prints a number
 * @num: the number we gonna use
 *
 */
void ecrire_num(unsigned long int num)
{
	unsigned long int div = 1, a = 0, result;

	while (num / div > 9)
	{
		a++;
		div *= 10;
	}
	for (; div >= 1; num %= div, div /= 10)
	{
		result = num / div;
		_putchar('0' + result);
	}
}

/**
 * _atoi - convert a string to number
 * @s: the string we gonna use
 * Return: number
 */

int _atoi(char *s)
{
	int x = 1;
	unsigned long int result = 0, a, b;

	for (a = 0; !(s[a] >= 48 && s[a] <= 57); a++)
	{
		if (s[a] == '-')
			x *= -1;
	}
	for (b = a; s[b] >= 48 && s[b] <= 57; b++)
	{
		result *= 10;
		result += (s[b] - 48);
	}
	return (x * result);
}

/**
 * main - print multiplication
 * @argc: size of array
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;
	if (argc != 3)
	{
		_string("Error ");
		exit(98);
	}
	ecrire_num(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');
	return (0);
}
