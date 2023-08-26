#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *x = (char *) &i;

	return (*x);
}
