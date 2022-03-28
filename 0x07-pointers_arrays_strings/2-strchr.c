#include "main.h"

/**
 * _strchr - function that locates character in a string
 * @s: string 
 * @c: character to be located
 * Return: pointer to first occurrence of c
 * NULL if the characer is not found
 */

char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
		{
			return s;
		}
		if (!*s)
			return (0);
	}
	return (0);
}

