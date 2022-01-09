#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes note in a certain index
 * @head: head of the linked list to delete node
 * @index: inded of node to delete
 * Return: returns 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int length = 0;
	dlistint_t *temp = *head;

	if (!head)
		return (-1);

	/* Get length of dlist */
	while (temp)
	{
		length++;
		temp = temp->next;
	}
	/* Edge cases for nonexistant nodes */
	if (index > length)
		return (-1);

	/* deletion process */

	temp = get_dnodeint_at_index(*head, index);

	if (index == 0)
	{
		*head = temp->next;
		temp->next->prev = NULL;
	} else if (index == length)
	{
		temp->prev->next = NULL;
	} else
	{
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
	}

	free(temp);
	return (1);
}
