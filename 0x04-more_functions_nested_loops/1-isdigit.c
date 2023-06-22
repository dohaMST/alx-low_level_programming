#include "main.h"
/**
 * _isdigit - test if a digit
 *@c : the char we gonna check
 * Return: 1 if it is a digit, 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
