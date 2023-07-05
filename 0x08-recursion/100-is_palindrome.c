#include "main.h"


/**
 * _help_is_palindrome - check if a string is palindrome
 * @s: the string we gonna check
 * @d: debut index
 * @f: fin index
 * Return: 1 if palindrome, 0 if not
 */
int _help_is_palindrome(char *s, int d, int f)
{
	if (d >= f)
		return (1);
	else if (s[d] != s[f])
		return (0);
	else
		return (_help_is_palindrome(s, d + 1, f - 1));
}

/**
 * is_palindrome - a function that returns 1 if a string is a palindrome
 * and 0 if not
 * @s: the string we gonna check
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (_help_is_palindrome(s, 0, length - 1));
}
