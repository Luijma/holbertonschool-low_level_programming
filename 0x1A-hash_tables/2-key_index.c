#include "hash_tables.h"
/**
 * key_index - returns index of a key
 * @key: key given
 * @size: size of the array of hash table
 * Return: returns the index of the key/value pair
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int long index = hash_djb2(key);

	return (index % size);
}
