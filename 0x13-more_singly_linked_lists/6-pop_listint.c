#include "lists.h"
/**
 * pop_listint - deletes head node
 * @head: reference to pointer of linked list
 * Return: 0 if list is empty, otherwise returns the head node's n
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head)
		return (0);

	temp = *head;
	*head = (*head)->next;
	num = temp->n;
	free(temp);

	return (num);
}
