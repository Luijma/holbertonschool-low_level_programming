#include "lists.h"
/**
 * add_nodeint_end - Adds node to end of linked list
 * @head: pointer to pointer to the head of list
 * @n: integer to add
 * Return: address of element, NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tail = NULL;
	listint_t *final = *head;

	tail = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	tail->n = n;
	tail->next = NULL;

	if(!*head)
	{
		*head = tail;
		return (end);
	}

	while (!final->next)
	{
		final = final->next;
	}
	final->next = tail;

	return (tail);
}
