#include "lists.h"
/**
 * get_nodeint_at_index - returns node at provided index
 * @head: head of linked list
 * @index: index to check for node
 * Return: NULL if index node invalid, otherwise returns node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	temp = head;

	for (i = 0; i != index; i++)
	{
		if (!temp->next)
			return (NULL);
		temp = temp->next;
	}
	return (temp);
}
