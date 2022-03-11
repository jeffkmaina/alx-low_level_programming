#include <stdio.h>
/**
 * main - print numbers < 10
 * using putchar
 * Return: 0 exited successfully
 */

int main(void)
{
	int c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
