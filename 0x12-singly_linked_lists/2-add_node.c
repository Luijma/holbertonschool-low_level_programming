#include "lists.h"
/**
 * add_node - adds a new node at start
 * @head: points to the address of element
 * @str: string to duplicate
 * Return: NULL on failure, address of new element otherwise
 */
list_t *add_node(list_t **head, const char *str)
{
	int strlen;
	list_t *node = NULL;

	for (strlen = 0; str[strlen]; strlen++)
	{}

	node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);

	node->len = strlen;
	node->str = strdup(str);
	node->next = *head;
	*head = node;

	return (node);
}
