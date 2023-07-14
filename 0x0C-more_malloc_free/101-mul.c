#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * _number - to know the existence of a number
 * @str: the string we gonna use
 * Return: 0 or 1
 */

int _number(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _length - to know the length of a string
 * @str: the string we gonna use
 * Return: the length of the string
 */

int _length(char *str)
{
	int num = 0;

	while (str[num] != '\0')
	{
		num++;
	}
	return (num);
}

/**
 * errors - handles errors messages
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies numbers
 * @argc: size of array
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *str1, *str2;
	int length1, length2, i, mult, length, num1, num2, *result, a = 0;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !_number(str1) || !_number(str2))
		errors();
	length1 = _length(str1);
	length2 = _length(str2);
	length = length1 + length2 + 1;
	result = malloc(sizeof(int) * length);
	if (!result)
		return (1);
	for (i = 0; i <= length - 1; i++)
		result[i] = 0;
	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		num1 = str1[length1] - '0';
		mult = 0;
		for (length2 = _length(str2) - 1; length2 >= 0; length2--)
		{
			num2 = str2[length2] - '0';
			mult += result[length1 + length2 + 1] + (num1 * num2);
			result[length1 + length2 + 1] = mult % 10;
			mult /= 10;
		}
		if (mult > 0)
			result[length1 + length2 + 1] += mult;
	}
	for (i = 0; i < length - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
