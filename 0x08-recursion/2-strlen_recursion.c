#include "main.h"

/**
 * _strlen_recursion - function that prints length of a string
 * @s: string to be evaluated
 * Return: eturns length of string
 */

int _strlen_recursion(char *s)
{
	unsigned int i = 0;

	if (s[i] == '\0')
	{
		return (0);
	}
	else
		return ((1) + _strlen_recursion(s + 1));
}
