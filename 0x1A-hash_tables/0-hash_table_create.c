#include"hash_table.h"
/**
 * hash_table_create - creates a hash table with size given
 * @size: size of list to be created
 * Return: pointer to newly created hash table
 */
hash_table_t *hast_table_create(unsigned long int size)
{
	hash_table_t *new;
	
	new->array = malloc(sizeof(hash_node_s) * size);

	if(new->array == NULL)
	{
		return (NULL);
	}

	return (new);
}
