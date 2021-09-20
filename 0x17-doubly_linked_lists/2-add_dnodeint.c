#include "lists.h"
/**
 * add_dnodeint - adds node to beginning of list
 * @head: head of list
 * @n: value to add to node
 * Return: address of new element, NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	if (!*head)
	{
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;
	} else
	{
		new_node->n = n;
		new_node->prev = (*head)->prev;
		new_node->next = *head
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (new_node);
}
