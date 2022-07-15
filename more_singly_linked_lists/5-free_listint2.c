#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head : pointer of pointer to the first position of the list
 *
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *freenode;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		*freenode = *head;
		*head = (*head)->next;
		free(freenode);
	}
	head = NULL;
}
