#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at given position
 * @head: beginning of list
 * @idx: index to insert n into
 * @n: number to insert
 * Return: pointer to new node, NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp;
	listint_t *prev;
	unsigned int i;

	if (!*head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	temp = *head;

	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; i < idx; i++)
	{
		if (!temp)
		{
			free(new);
			return (NULL);
		}
		prev = temp;
		temp = temp->next;
	}
	new->n = n;
	new->next = temp;
	prev->next = new;
	return (new);
}
