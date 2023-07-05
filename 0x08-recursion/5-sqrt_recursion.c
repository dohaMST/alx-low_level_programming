#include "main.h"

/**
 * _help_recursion - function that help to calcule square
 * @n: the number we gonna work with
 * @a: the index
 * Return: the square
 */

int _help_recursion(int n, int a)
{
	if (a * a > n)
		return (-1);
	else if (a * a == n)
		return (a);
	else
		return (_help_recursion(n, a + 1));
}

/**
 * _sqrt_recursion - function that returns
 * the natural square root of a number.
 * @n: the number we gonna use
 * Return: the natural square root of a number
 */

int _sqrt_recursion(int n)
{
        if (n < 0)
                return (-1);
        else
                return (_help_recursion(n, 0));
}
