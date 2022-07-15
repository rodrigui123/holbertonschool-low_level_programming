#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h : pointer to first position of list
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
