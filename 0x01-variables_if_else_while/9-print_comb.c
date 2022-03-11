#include <stdio.h>
/**
 * main - prints all comb of single
 * digits
 * Return: 0 exits successfully
 */

int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(c);
		putchar(',');
	}
	putchar('\n');
	return (0);
}
