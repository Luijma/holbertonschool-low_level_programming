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

	if(new_node->prev == NULL)
	{
		new_node->n = n;
		new_node->next = *head;
		new_node->prev = NULL;
		*head = new_node;
	}
	return (new_node);
}
