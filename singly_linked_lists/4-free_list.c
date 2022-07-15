#include "lists.h"

/**
 * main - check the code
 *
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
