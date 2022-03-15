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
			putchar((a * b) + '0');
			putchar(',');
			putchar(' ');
			b++;
		}
		a++;
		putchar('\n');
	}
}
