#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -a program that multiplies two numbers.
 * @argc: count of arguments
 * @argv: array of pointers
 * Return: 0 if SUCCESS
 */

int main(int argc, char *argv[])
{
	int i;
	int product = 0;

	if (argc == 1)
		printf("Error");
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			product = atoi(argv[1]) * atoi(argv[2]);
		}
		printf("%d\n", product);
	}
	return (0);
}
