#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list
 * @h : pointer to the first position in the node
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
	listint_t *ptr;
	int count = 0;

	*ptr = *h;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
