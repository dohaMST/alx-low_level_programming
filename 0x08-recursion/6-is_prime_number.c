#include "main.h"

/**
 * _help_is_prime - a function to test if a number is prime
 * or not
 * @n: the number we gonna work with
 * @a:the diviseur
 * Return: 1 or 0
 */

int _help_is_prime(int n, int a)
{
	if (n <= 1)
		return (0);
	else if (a * a > n)
		return (1);
	else if (n % a == 0)
		return (0);
	else
		return (_help_is_prime(n, a + 1));
}

/**
 * is_prime_number - function that returns 1
 * if the input integer is a prime number
 * otherwise return 0.
 * @n: the number we gonna work with
 * Return: 1 if n is prime, 0 if not
 */

int is_prime_number(int n)
{
	return (_help_is_prime(n, 2));
}
