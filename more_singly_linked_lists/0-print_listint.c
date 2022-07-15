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
		if (h->next != NULL)
			printf("%s\n", h->str);
		count++;
		h = h->next;
	}
	return (count);
}
