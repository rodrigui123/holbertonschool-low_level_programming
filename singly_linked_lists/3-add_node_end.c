#include "lists.h"

/**
 * add_node_end - function that adds node at the end of list
 * lastdigit - last position to locate the new node
 * newnode - the node that will go at the end of list
 * @head : pointer of a pointer to list
 * @str : string
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *lastdigit = *head;

	newnode = malloc(sizeof(list_t));
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
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = NULL;
}
	return (newnode);
}
