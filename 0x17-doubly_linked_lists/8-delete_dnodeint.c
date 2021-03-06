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

	if (!head || !*head)
		return (-1);

	/* Get length of dlist */
	while (temp)
	{
		length++;
		temp = temp->next;
	}
	/* Edge cases for nonexistant nodes */
	if (index >= length)
		return (-1);

	/* deletion process */

	temp = get_node_indexed(*head, index);
	if (index == 0)
	{
		*head = temp->next;
	} else if (index == length - 1)
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
/**
 * get_node_indexed - gets node in index
 * @head: head of list
 * @index: index to search for
 * Return: node, or NULL if it doesnt exist
 */
dlistint_t *get_node_indexed(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		i++;
		temp = temp->next;
	}

	return (NULL);
}
