#include "hash_tables.h"

/**
 * key_index - Get the index at which a key pair should
 *             be stored in array of a hash table
 * @key: The key to get the index
 * @size: The size of the array of the hash table
 *
 * Return: The index key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
