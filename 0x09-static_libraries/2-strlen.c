#include "main.h"
#include <string.h>

/**
 * _strlen - function that returns the length of a string
 * @s: length of string
 * Return: 0 success
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != 0)
	{
		a++;
	}
	return (a);
}
