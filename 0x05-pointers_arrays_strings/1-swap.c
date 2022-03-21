#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: integer to be swapped with b
 * @b: integer to beswapped with a
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

