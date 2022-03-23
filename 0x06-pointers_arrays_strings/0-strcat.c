#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: string to aappend to
 * @src: string to add
 *
 * Return: returns value of dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
