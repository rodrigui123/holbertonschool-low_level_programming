#include "lists.h"

/**
 * insert_dnodeint_at_index - new node at a given position
 * @h : pointer of pointer to the first node of list
 * @idx : idx of list where the new node should be added (starts at 0)
 * @n : content of nodes in list
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *aux = *h;
	unsigned int i = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	if (idx == 0 || *h == NULL)
		return (add_dnodeint(h, n));
	aux = *h;
	for (i = 0; i < idx - 1; i++)
	{
		aux = aux->next;
		if (!aux)
			return (NULL);
	}
	if (aux->next == NULL)
		return (add_dnodeint_end(h, n));
	newnode->next = aux->next;
	newnode->prev = aux;
	aux->next = newnode;
	aux = newnode->next;
	aux->prev = newnode;
	return (newnode);
}
