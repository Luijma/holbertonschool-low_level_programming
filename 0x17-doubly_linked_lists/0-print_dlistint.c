#include "lists.h"
/**
 * print_dlistint - prints all elements of dlistint_t
 * @h: head of dllinked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t printed = 0;


	while(h)
	{
		printf("%d\n", h->n);
		printed++;
		h = h->next;
	}
	return (printed);
}
