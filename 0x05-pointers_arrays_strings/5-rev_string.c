#include "main.h"

/**
 * rev_string - Write a function that reverses a string.
 * @s: string to be printed
 */

void rev_string(char *s)
{
	int i, j, k;
	char tmp;

	j = 0;
	k = 0;

	while (s[j] != 0)
	{
		j++;
	}
	k = j - 1;

	for (i = 0; i < j / 2; i++)
	{
		tmp = s[i];
		s[i] = s[j];
		s[k--] = tmp;
	}
}
