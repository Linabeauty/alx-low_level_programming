#include "main.h"
#include <stdio.h>

/**
* print_rev - printing a string in reverse
* @s: the string to be printed in rev
* Return: Void
*/

void print_rev(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
	n++;
	}

	for (n -= 1; n >= 0; n--)
	{
	_putchar(s[n]);
	}
	_putchar('\n');
}
