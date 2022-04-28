#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @index: index within binary
 * @n: integer in decimal
 * Return: 0 or 1 error -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int max_bits;

	/* validate index is not out of range */
	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	/* shift number index places right to find bit */
	bit = ((n >> index) & 1);
	return (bit);
}
