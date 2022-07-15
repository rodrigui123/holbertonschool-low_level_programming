#include "lists.h"

/**
 * add_nodeint_end - function that adds node at the end of list
 * lastdigit - last position to locate the new node
 * newnode - the node that will go at the end of list
 * @head : pointer of a pointer to list
 * Return: Always 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *lastdigit = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode)
	{
		if (*head == NULL)
			*head = newnode;
		else
		{
			while (lastdigit->next != NULL)
			{
				lastdigit = lastdigit->next;
			}
			lastdigit->next = newnode;
		}
	newnode->n = n;
	newnode->next = NULL;
	}
	return (newnode);
}
