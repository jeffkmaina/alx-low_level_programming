#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - functions that sums all its parameters
 * @n: number of parameters
 *
 * Return: returns sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list list;

	va_start(list, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);

	return (sum);
}
