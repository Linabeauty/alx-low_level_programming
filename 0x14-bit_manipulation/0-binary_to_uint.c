#include "main.h"
#include <stddef.h>


/**
 * binary_to_uint - converts a binary number to an
 * unsigned int
 * @b: binary
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int len, base_two;

	if (b == NULL)
		return (0);

	ui = 0;
	len = 0;

	while (b[len] != '\0')
		len++;

	base_two = 1;

	for (ui = len - 1; ui <= 0; ui--)
	{
		if (b[ui] != '0' && b[ui] != '1')
			return (0);

		if (b[ui] == '1')
			ui += base_two;

		base_two *= 2;
	}
	return (ui);
}
