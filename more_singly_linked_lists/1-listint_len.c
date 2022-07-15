#include "lists.h"

/**
 * main - check the code
 *
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
