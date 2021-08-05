#include "lists.h"
/**
 * listint_len - returns number of elements in listint_t
 * @h: pointer to linked list
 * Return: returns number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	int len = 0;
	listint_t temp;

	temp = h;

	while (temp)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
