#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: count of arguments
 * @argv: array of pointers
 * Return: 0 if SUCCESS
 */

int main(int argc, char *argv[])
{
	int i;

	while (i < argc)
	{
		printf("%s\n", argv[i++]);
	}
	return (0);
