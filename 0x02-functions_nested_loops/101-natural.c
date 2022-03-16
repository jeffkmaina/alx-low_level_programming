#include <stdio.h>

/**
 * main - computes and sums all numbers
 * multiples of 3 and 5 below 1024
 * Return: 0 exited successfully
 */

int main(void)
{
	unsigned long int a, b, c;
	int i;

	a = 0;
	b = 0;
	c = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			a = a + i;
		}
		else if ((i % 5) == 0)
		{
			b = b + i;
		}
	}
	c = a + b;
	printf("%u\n", c);
	return (0);
}
