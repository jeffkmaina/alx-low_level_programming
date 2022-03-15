#include "main.h"

/**
 * times_table - prints out times_table
 */
void times_table(void)
{
	int a, b, c;

	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			c = a * b;
			if ( b == 0)
			{
				putchar(c + '0');
			}
			if (c < 10 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			else if (c >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			b++;
		}
		a++;
		_putchar('\n');
	}
}
