#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The characterwe gonna use
 * Return: 1
 */
int put_char(char c)
{
	return (write(1, &c, 1));
}
