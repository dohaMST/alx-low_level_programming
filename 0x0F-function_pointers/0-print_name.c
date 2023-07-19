#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: the name we gonna print
 * @f: a pointer to a function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
