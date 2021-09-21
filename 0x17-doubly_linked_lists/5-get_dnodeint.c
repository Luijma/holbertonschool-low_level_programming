#include "lists.h"
/**
 * get_dnodeint_at_index - returns node in index
 * @head: head of the list to check index for
 * @index: index of node to return
 * Return: the node at index, NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *node;

	if (!head)
		return (NULL);

	node = head;

	for (i = 0; i < index; i++)
	{
		if (node->next == NULL)
			return (NULL);
		node = node->next;
	}
	return (node);
}
