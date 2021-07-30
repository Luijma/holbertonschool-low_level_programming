#include "lists.h"
/**
 * list_len - returns number of elements in a linked list_t list
 * @h: linked list to be checked
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	int i = 0;

	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
