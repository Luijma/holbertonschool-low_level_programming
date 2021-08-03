#include "lists.h"
/**
 * print_listint - prints all elements of a listint_t list
 * @h: list to be printed
 * Return: size of list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	size_t i = 0;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
