#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: number of elements in array
 * @size: size of array
 *
 * Return: NULL if fails, returns pointer to allocate memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	ptr = malloc(sizeof(int) * nmemb * size);

	if (ptr == NULL)
		return (NULL);
	return (ptr);
}

