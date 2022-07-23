#include "lists.h"

/**
* delete_dnodeint_at_index - deletes node at index of a dlistint_t list
* @head: pointer to head node
* @index: index of node to delete
* Return: Always EXIT_SUCCESS.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux, *prevnode, *nextNode, *varnode;
	unsigned int i;

	aux = *head;
	if (!aux)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(aux);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		aux = aux->next;
		if (!aux)
			return (-1);
	}
	if (!aux->next)
	{
		varnode = aux;
		varnode = aux->prev;
		varnode->next = NULL;
		free(aux);
		return (1);
	}
i	prevnode = aux->prev;
	nextnode = aux->next;
	prevnode->next = nextnode;
	nextnode->prev = prevnode;
	free(aux);
	return (1);
}
