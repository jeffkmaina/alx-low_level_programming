#include <stdio.h>
/**
 * main - print all numbers < ten
 * Return: 0 exited seccessfully
 */

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	printf("\n");
	return (0);
}
