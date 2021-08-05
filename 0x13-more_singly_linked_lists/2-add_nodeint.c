#include "lists.h"
/**
 * add_nodeint - adds node at the beginning of a listint_t
 * @head: pointer to top of linked list
 * @n: number to insert to top of list
 * Return: new linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if(!new)
		return (NULL);

	new->next = *head;
	new->n = n;
	*head = new;

	return (new);
}
