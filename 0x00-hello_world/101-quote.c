#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - and that piece of art is useful" - Dora Korpar, 2015-10-19
 *
 * Return: 0 if successful
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);

}
