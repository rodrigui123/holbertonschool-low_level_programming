#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h : node
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
		h = h->next;
	count++;
	return (count);
}
