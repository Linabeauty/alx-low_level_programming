#include "main.h"

/**
 * binary_to_uint - Convert binary number to an unsigned int
 * @b: Pointer to a string 0 and 1
 i*
 * Return: 0 or the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int y;

	y = 0;
	if (!b)

	for (x = 0; b[x] != '\0'; x++)

	{
		if (b[x] != '0' && b[x] != '1')
			return (0);

	}
	for (x = 0; b[x] != '\0'; x++)
	{
		y <<= 1;
		if (b[x] == '1')
			y += 1;
	}
	return (y);
}
