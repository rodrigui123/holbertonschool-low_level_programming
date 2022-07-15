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
		printf("%d\n", h);
		count++;
		h = h->next;
	}
	return (count);
}
