#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head : pointer of pointer to the first node of list
 * @idx : idx of list where the new node should be added (starts at 0)
 * @n : content of nodes in list
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *aux = *head;
	unsigned int i = 0;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL || head == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = aux;
		*head = newnode;
		return (newnode);
	}
	while (i < (idx - 1))
	{
		if (aux->next == NULL)
			return (NULL);
		i++;
		aux = aux->next;
	}
	newnode->next = aux->next;
	aux->next = newnode;
	return (newnode);
}
