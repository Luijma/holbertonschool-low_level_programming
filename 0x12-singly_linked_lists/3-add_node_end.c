#include "lists.h"
/**
 * add_node_end - adds node at end of linked list
 * @head: points to head of the list
 * @str: string to be duplicated
 * Return: Adress of new node, NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail = NULL;
	list_t *end = *head;
	int strlen;
	int i;

	for (strlen = 0; str[strlen]; strlen++)
	{}

	tail = malloc(sizeof(list_t));
	if (!tail)
		return (NULL);

	tail->len = strlen;
	tail->str = strdup(str);
	tail->next = NULL;

	if (!*head)
	{
		*head = tail;
		return (tail);
	}
	while (end->next)
		end = end->next;
	end->next = tail;

	return (tail);
}
