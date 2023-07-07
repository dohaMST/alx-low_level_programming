#include "main.h"
/**
 * _isupper - check if a char is uppercase or not
 * @c : is the char we gonna check
 * Return: 1 if char is uppercase, 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
