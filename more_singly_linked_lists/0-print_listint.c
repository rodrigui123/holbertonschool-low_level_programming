#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list
 * @h : pointer to the first position in the node
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str != NULL)
		
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
