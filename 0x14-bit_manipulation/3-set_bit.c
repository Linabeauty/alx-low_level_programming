#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: Pointer of an unsigned long int
 * @index: Index of the bit
 *
 * Return: 1 if it is successful, -1 if it fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1UL << index;
	*n |= m;

	return (1);
}
