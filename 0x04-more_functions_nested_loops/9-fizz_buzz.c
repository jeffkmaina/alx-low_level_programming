#include <stdio.h>

/**
 * main - prints numbers 1 - 100
 * 3 and multiples of 3 prints Fizz
 * 5 and multiples of 5 prints Buzz
 * and both multiples prints FizzBuzz
 * Return: 0 Success
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0 && n % 3 != 0)
		{
			printf("Buzz ");
		}
		else if (n % 5 == 0 && n % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", n);
		}
	}
	printf("\n");
	return (0);
}
