#include "main.h"

/**
 * flip_bits - Function tthat flip bit to get from one number to the other
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bit to be fliped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	int jbits = 0;

	for (jbits = 0; n || m; n >>= 1, m >>= 1)

		if ((n & 1) != (m & 1))

			jbits++;
	return (jbits);
}
