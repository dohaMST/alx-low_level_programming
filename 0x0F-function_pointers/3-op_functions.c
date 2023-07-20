#include "3-calc.h"

/**
 * op_add - Returns the sum
 * @a: first number.
 * @b: second number.
 * Return: The sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference
 * @a: first number.
 * @b: second number.
 * Return: The difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product
 * @a: first number.
 * @b: second number.
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division
 * @a: first number.
 * @b: second number.
 * Return: the result of the division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder
 * @a: first number.
 * @b: second number.
 * Return: The remainder of the division of a by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
