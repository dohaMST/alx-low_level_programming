#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers
 * @separator: the separator
 * @n: the number of parameters
 * @...: the rest of parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list para;
	unsigned int i;

	va_start(para, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(para, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(para);
}
