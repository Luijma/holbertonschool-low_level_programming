#include "lists.h"
/**
 * get_dnodeint_at_index - gets node in index
 * @head: head of list
 * @index: index to search for
 * Return: node, or NULL if it doesnt exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
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
