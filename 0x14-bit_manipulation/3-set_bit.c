#include "main.h"

/**
 * set_bit - bit to be set at 1 at a given index.
 * @index: The index at which bit to be set
 * @n: pointer number to change
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 65)
		return (-1);

	*n = ((1 << index) | *n);

	return (1);
}
