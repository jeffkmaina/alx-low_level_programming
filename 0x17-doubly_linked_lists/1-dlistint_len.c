#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 * in a llinked list
 * @h: pointer to node
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes += 1;

	}
	return (nodes);
}
