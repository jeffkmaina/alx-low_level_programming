#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: count of arguments
 * @argv: array of pointers
 * Return: 0 if SUCCESS
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n",argc - 1);
	}
	return (0);
}
