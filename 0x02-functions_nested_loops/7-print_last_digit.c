#include "main.h"

/**
 * print_last_digit - prints last
 * integer of number
 * @n: check integer
 * Return: return last value of digit
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		n = -n;
	}
	a = n % 10;

	if (a < 0)
	{
		a = -a;
	}
	_putchar(a + '0');
	return(a);
}
