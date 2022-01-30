#include"hash_tables.h"
/**
 * hash_table_create - creates a hash table with size given
 * @size: size of list to be created
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;


	new = malloc(sizeof(hash_table_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->array = malloc(sizeof(hash_node_t) * size);
	if (new->array == NULL)
	{
		return (NULL);
	}
	new->size = size;

	return (new);
}
