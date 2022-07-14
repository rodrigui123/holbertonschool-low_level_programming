#include "lists.h"

/**
 * add_node - add a node at the beginning of a list
 * @newnod : the new node
 * @head : pointer of a pointer to the array
 * @str : string
 * Return: newnode
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnod;

	newnod = malloc(sizeof(list_t));
	if (newnod == NULL)
		return (NULL);
	newnod->str = strdup(str);
	newnod->len = strlen(str);
	newnod->next = *head;
	*head = newnod;

	return (newnod);
}
