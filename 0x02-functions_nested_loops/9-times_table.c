#include "main.h"

/**
 * times_table - prints out times_table
 */
void times_table(void)
{
	int a, b;

	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			_putchar((a * b) + '0');
			_putchar(',');
			_putchar(' ');
			b++;
		}
		a++;
		_putchar('\n');
	}
}
