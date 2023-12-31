#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number
 * @n: the number we gonna use
 * Return: the factorial of a given number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
