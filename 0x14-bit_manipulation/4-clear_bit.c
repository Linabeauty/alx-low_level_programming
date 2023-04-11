#include "main.h"

/**
 * clear_bit - bit to be set at 0 at a given index.
 * @index: Is the index, starting from 0 of the bit you want to set
 * @n: pointer number to change
 * Return: 1 if it worked, or -1 if an error occurre
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
	if (index > 1)
		return (-1);

	*n = ((1 << index) | *n);

	return (1);
}
