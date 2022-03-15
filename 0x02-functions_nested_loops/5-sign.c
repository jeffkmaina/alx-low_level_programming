#include "main.h"

/**
 * print_sign - prints sign of number
 * @n: checks integer
 * Return: 1 prints + if n > 0
 * 0 prints 0 if n == 0
 * -1 prints - if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}