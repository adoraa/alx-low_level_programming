#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key in a hash table
 * @ht: hash table to look into
 * @key: key to search for
 * Return: value associated with the element
 * or NULL if key can’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (!ht || !key || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
