#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *separator = "", *temp;

	va_list para;

	va_start(para, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(para, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(para, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(para, double));
					break;
				case 's':
					temp = va_arg(para, char *);
					if (!temp)
						temp = "(nil)";
					printf("%s%s", separator, temp);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(para);
}
