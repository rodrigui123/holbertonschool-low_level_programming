#include "lists.h"

/**
 * add_node - add a node at the beginning of a list
 * @newnode : the node that will be added at the beginning
 * Return: newnode
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode->str;
	
	return (newnode);
}
