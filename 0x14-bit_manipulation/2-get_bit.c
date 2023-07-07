#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * index
 * @n: Unsigned long int input
 * @index: Index of the bit
 *
 * Return: Bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;

	if (n == 0 && index < 64)
		return (0);

	for (x = 0; x <= 63; n >>= 1, x++)
	{
		if (index == x)
		{
			return (n & 1);
		}
	}

	return (-1);
}
