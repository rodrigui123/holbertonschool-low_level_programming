#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = strdup(n);
	newnnode->n = *head;
	*head = newnode;

	return (newnode);
}	
