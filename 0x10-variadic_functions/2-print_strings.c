#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings
 * @separator: the separator
 * @n: the number of parameters
 * @...: the rest of parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list para;
	char *temp;
	unsigned int i;

	va_start(para, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(para, char *);
		if (temp == NULL)
			printf("(nil)");
		else
			printf("%s", temp);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(para);
}
