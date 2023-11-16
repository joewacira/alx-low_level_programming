#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns length of elements in the linked-list
 * @h: pointer to (list_t list)
 * Return: num of elems in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
