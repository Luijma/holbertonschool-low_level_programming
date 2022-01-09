#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node in position
 * @head: head of list
 * @idx: index to insert
 * @n: number node holds
 * Return: NULL if impossible
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
		unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp = *head;
	unsigned int length = 0;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	while (temp)
	{
		length++;
		temp = temp->next;
	}

	if (idx == 0)
		return (add_dnodeint(head, n));
	if (idx == length)
		return (add_dnodeint_end(head, n));
	if (idx > length)
	{
		free(new_node);
		return (NULL);
	}
	temp = get_dnodeint_at_index(*head, idx);
	new_node->n = n;
	new_node->prev = temp->prev;
	temp->prev = new_node;
	new_node->next = temp;
	new_node->prev->next = new_node;
	return (new_node);
}
/**
 * get_dnodeint_at_index- gets node at index
 * @head: head of list
 * @index: index
 * Return: NULL if failure
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
