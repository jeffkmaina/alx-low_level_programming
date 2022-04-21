#include "lists.h"
#include <stdio.h>

/**
 * list_len - function that returns number of elements linked in
 * in a linked list_t list
 * @h: pointer to the next node
 * Return: number of elements linked
 *
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

