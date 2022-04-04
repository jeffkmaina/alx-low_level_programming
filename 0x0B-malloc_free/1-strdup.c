#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function tha returns a pointer to a new allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: a pointer
 * Return: NULL if str is NULL OW pointer to duplicate string
 */

char *_strdup(char *str)
{
	char *s;
	int i = 0;
	int k;

	if (str == NULL)
		return (NULL);

	while (*(str + i))
		i++;
	i++;
	s = malloc(sizeof(char) * i);

	if (s == NULL)
	{
		return (NULL);
	}

	for (k = 0; k <= i; k++)
	{
		s[k] = str[k];
	}
	return (s);
}
