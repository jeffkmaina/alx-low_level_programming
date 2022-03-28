#include "main.h"

/**
 * _memset - ironnou
 * @s: pointer to char params
 * @b: data to change
 * @n: index
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	while (i > 0)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
