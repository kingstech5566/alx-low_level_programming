#include "lists.h"

/**
 * list_len - finds the number of element in a
 * linked list_t list
 * @h: the linkec list_t list
 *
 * Return: the number of element in h
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;

		count++;
	}

	return (count);
}
