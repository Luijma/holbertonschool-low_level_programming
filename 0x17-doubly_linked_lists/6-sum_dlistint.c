#include "lists.h"
/**
 * sum_dlistint - adds up the data
 * @head: head of the list
 * Return: 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head->next;
	}
	return (sum);
}
