#include "main.h"
#include <stdlib.h>

/**
 *
 */

void _string(char *string)
{
	int a = 0;
	while (string[a])
	{
		_putchar(string[a]);
		a++;
	}
}

/**
 *
 */
void ecrire_num(unsigned long int num)
{
	unsigned long int div = 1, a, result;

	for (a = 0; num / div > 9; a++, div *= 10);
	for (; div >= 1; num %= div, div /= 10)
	{
		result = num / div;
		_putchar('0' + result);
	}
}

/**
 *
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
 *
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
