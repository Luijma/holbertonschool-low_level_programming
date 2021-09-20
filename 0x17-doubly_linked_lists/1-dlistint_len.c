#include "lists.h"
/**
 * dlistint_len - gets length of a doubly linked list
 * @h: list to get length of
 * Return: length of doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
