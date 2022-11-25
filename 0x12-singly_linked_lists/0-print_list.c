#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the element of the list_t list.
 * @h: the list_t list
 *
 * Return: the number of node in h
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;

		count++;
	}

	return (count);
}
