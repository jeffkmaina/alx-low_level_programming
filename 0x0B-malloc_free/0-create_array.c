#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -  a function that creates an array of chars, and
 * initializes it with a specific char.
 * @size: size
 * @c: character
 * Return: NULL if size is 0, else pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (0);

	p = (char *)malloc((size) * sizeof(char));

	if (p == NULL)
		return (NULL);

	while (i < size)
	{
		p[i] = c;
		i++;
	}
	*(p + i) = '\0';
	return (p);
}
