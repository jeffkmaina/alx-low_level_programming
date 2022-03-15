#include "main.h"

/**
 * print_to_98 - prints all natural
 * numbers from n to 98
 * @n: beginning of int
 */

void print_to_98(int n)
{
	nt sum;

	sum = 0;
	n = 0;

	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum += n;
		}
	_putchar (n + '0');
	n++;
	}
}
