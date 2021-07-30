#include "lists.h"
/**
 * print_list - prints all elements of a list_t list
 * @h: linked list to be printed
 * Return: Size of linked list
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		} else
		{
			printf("[%i] %s\n", temp->len, temp->str);
		}
		temp = temp->next;
		i++;
	}
	return (i);
}
