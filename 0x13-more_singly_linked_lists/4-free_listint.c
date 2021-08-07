#include "lists.h"
/**
 * free_listint - frees up the space for linked list members
 * @head: head of the list
 */
void free_listint(listint_t *head)
{
	listint_t temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(tmp);
	}
}
