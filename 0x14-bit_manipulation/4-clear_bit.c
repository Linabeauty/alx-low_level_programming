#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: Pointer of an unsigned long int
 * @index: Index of the bit
 *
 * Return: 1 if it is successful, -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int o;

	if (index > 63)
		return (-1);

	o = 1 << index;

	if (*n & o)
		*n ^= o;

	return (1);
}
