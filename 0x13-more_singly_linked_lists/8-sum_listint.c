#include "lists.h"
/**
 * sum_listint - adds all numbers in linked list
 * @head: head of the linked list
 * Return: Sum of all numbers, 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if(!head)
		return (0);

	temp = head;

	while(temp)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
