#include <stdio.h>
/**
 * main - prints all comb of single
 * digits
 * Return: 0 exits successfully
 */

int main(void)
{
	int c = '0';

	while (c <= '9')
	{
		putchar(c);
		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
