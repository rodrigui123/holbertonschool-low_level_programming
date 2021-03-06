#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head : pointer to pointer to first pos of list
 * @n : the data of the nodes
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;
	if (*head != NULL)
		(*head)->prev = newnode;
	*head = newnode;

	return (newnode);
}
