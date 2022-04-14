#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings followed by a new line
 * @separator: string to be pointed btn strings
 * @n: number of strings passed to function
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(list, char *);

		if (!s)
			s = "(nil)";
		if (!separator)
			printf("%s", s);
		else if (separator && i == 0)
			printf("%s", s);
		else
			printf("%s%s", separator, s);
	}
	printf("\n");

	va_end(list);
}
