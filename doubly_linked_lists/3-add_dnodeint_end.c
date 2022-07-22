#include "lists.h"

/**
 * add_dnodeint_end - function that adds node at the end of list
 * lastdigit - last position to locate the new node
 * newnode - the node that will go at the end of list
 * @head : pointer of a pointer to list
 * @n : content of the list (because they are numbers)
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *lastdigit = *head;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode)
	{
		if (*head == NULL)
			newnode->prev = NULL;
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
	newnode->prev = lastdigit;
	}
	return (newnode);
}
