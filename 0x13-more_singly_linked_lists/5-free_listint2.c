#include "lists.h"
/**
 * free_listint2 - frees up the space for linked list members
 * @head: head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if(!head)
		return;

	while (*head)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
}
