#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head : pointer to the first position of the list
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	listint_t *freenode;

	while (head)
	{
		free(head->n);
		freenode = head->next;
		free(head);
		head = freenode;
	}
}
