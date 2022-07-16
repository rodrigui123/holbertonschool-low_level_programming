#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *aux = *head;
	unsigned int i;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	while (i < (idx - 1) && aux)	
	{
		if (aux->next == NULL)
			return (NULL);
		i++;
		aux = *head->next;
	}
	newnode->next = aux->next;
	aux->next = newnode;
	return (newnode);
}
