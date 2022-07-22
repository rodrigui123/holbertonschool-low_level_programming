#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a list
 * @h : pointer to the first position in the node
 * Return: number of elements.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t count = 0;

	ptr = h;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
