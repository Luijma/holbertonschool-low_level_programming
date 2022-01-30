#include "hash_tables.h"
/**
 * hash_table_set - adds element to a hash table
 * @ht: hash table to add element sto
 * @key: key associated to value
 * @value: value associated with the key
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *element = NULL;
	int index = 0;

	element = malloc(sizeof(hash_node_t *));
	if (element == NULL)
		return (0);
	element->key = strdup(key);
	element->value = strdup(value);

	index = key_index((const unsigned char *)key, ht->size);

	element->next = ht->array[index];
	ht->array[index] = element;
	return (1);
}
