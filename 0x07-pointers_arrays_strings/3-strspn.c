#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 * Return: number of bytes in initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				len++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (len);
}
