#include "main.h"
#define NULL 0

/**
 * _strchr - function that locates character in a string
 * @s: string
 * @c: character to be located
 * Return: pointer to first occurrence of c
 * NULL if the characer is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c) /* find match */
		i++;

	if (s[i] == c) /* if match, assign to address */
		return (&s[i]);
	else
		return (NULL);
}
