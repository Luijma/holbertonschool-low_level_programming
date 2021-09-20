#include "lists.h"
/**
 * add_dnodeint_end - adds node to end of list
 * @head: head of the list
 * @n: value to be inserted
 * Return: Address of new node, NULL On fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last = *head;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (last->next)
	{
		last = last->next;
	}
	new_node->prev = last;
	last->next = new_node;

	return (new_node);
}
