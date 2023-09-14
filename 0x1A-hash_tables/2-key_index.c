#include "hash_tables.h"

/**
 * key_index - Gets the index of a key in the hash table array
 * @key: The key
 * @size: The size of the array
 *
 * Return: The index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	/* Calculate the hash value using the hash_djb2 function */
	hash_value = hash_djb2(key);

	/* Get the index by performing modulo division with the size of the array */
	return (hash_value % size);
}
