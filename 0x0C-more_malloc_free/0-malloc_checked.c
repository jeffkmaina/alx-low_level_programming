#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: int variable
 *
 * Return: pointer to allocated memory else 98 if fails
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(sizeof(b));
	
	if (p == NULL)
		exit (98);

	return (p);
}

