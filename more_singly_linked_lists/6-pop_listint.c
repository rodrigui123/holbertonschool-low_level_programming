#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a list
 * @head : pointer of the pointer to the first position of list
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}
