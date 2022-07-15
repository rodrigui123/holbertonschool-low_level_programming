#include "lists.h"

/**
 * free_list - function that frees a list
 * @head : pointer to the first position of data
 * Return: Always 0.
 */
void free_list(list_t *head)
{
	list_t *freenode;

	while (head)
	{
		free(head->str);
		freenode = head->next;
		free(head);
		head = freenode;
	}
}
