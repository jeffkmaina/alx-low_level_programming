#include "main.h"
#define NULL 0

/**
 * _strpbrk - function that searches a string for any of a st of bytes
 * @s: string to evaluate
 * @accept: string containing bytes to look for
 * Return: Returns a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0') /*iterate through string*/
	{
		for (j = 0; accept[j] != '\0'; j++) /* iterate through target */
		{
			if (s[i] == accept[j]) /* stop at first match */
			{
				s = &s[i]; /* set pointer to first occurence */
				return (s);
			}
		}
		i++;
	}
	return (NULL); /* return NULL if no matches */

}
