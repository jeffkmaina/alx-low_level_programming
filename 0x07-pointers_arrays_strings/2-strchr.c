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

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
