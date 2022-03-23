#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * it will use most n bytes from src and src does not
 * need to be null terminateed if it has n or more bytes
 * @dest: string to append
 * @src: string to add
 * @n: integer
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n);
{
	int i, j, n;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

