#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: the integer we gonna use
 */

void *malloc_checked(unsigned int b)
{
	int *p = (int *) malloc(b);

	if (!p)
		exit(98);
	return (p);
}
