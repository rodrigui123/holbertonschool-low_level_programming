#include "lists.h" 

/**
 * add_node_end - function that adds node at the end of list
 * lastdigit - last position to locate the new node
 * newnode - the node that will go at the end of list
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *lastdigit;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = NULL;
	if (head == NULL)
	{
		*head = newnode;
		return(newnode);
	}
	while (lastdigit->next != NULL)
	{
		lastdigit = lastdigit->next;
	}
	lastdigit->next = newnode;
}
