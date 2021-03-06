#include "lists.h"

/**
 * sum_listint - func returns the sum of all the data list
 * @head : pointer to first node in list
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
