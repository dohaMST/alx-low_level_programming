#include "main.h"
/**
 * print_last_digit - function will print the last digit of a number
 * @n: the number we will take the last digit from
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');
	return (a);
}
