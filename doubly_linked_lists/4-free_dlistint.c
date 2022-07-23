#include "lists.h"

/**
 * free_dlistint - function that frees a list
 * @head : pointer to the first position of the list
 * Return: Always EXIT_SUCCESS.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *freenode;

	if (head == NULL)
	{
		return;
	}
	while (head)
	{
		freenode = head->next;
		free(head);
		head = freenode;
	}
}
