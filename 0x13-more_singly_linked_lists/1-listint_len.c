#include "lists.h"
#include <stdio.h>

/*
 * listint_len - count the number of elements in a linked listint list
 *
 * @h: Head of nodes
 *
 * Return: (Count).
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != 0)

	{
		count++;
		h = h->next;
	}
	return (count);
}
