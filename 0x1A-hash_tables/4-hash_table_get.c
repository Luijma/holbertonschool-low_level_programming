#include "hash_tables.h"
/**
 * hash_table_get - retrieves value associated with a key
 * @ht: hash table to search
 * @key: key to search for
 * Return: Value associated with key, NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *current = NULL;

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (ht->array[index]->value);
		current = current->next;
	}
	return (NULL);
}
