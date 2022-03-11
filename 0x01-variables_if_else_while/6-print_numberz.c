#include <stdio.h>
/**
 * main - print numbers < 10
 * using putchar
 * Return: 0 exited successfully
 */

int main(void)
{
	int c;

	while (c < 10)
	{
		putchar(c);
		c++;
	}
	return (0);
}
