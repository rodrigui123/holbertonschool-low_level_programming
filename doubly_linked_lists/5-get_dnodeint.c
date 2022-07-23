#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linkedlist
 * @head : pointer to first node of list
 * @index : index of node
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
