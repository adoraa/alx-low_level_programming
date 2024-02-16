#include "hash_tables.h"
/**
 * key_index - gives the index of a key in a hash table array
 * @key: key
 * @size: size of the array of the hash table
 * Return: index where the key should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);
	return (hash_value % size);
}
