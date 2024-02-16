#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update the key to
 * @key: key
 * @value: value associated with the key
 * Return: 1 if it succeeds, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *n_node, *current;

	if (!ht || !key || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		} current = current->next;
	} n_node = malloc(sizeof(hash_node_t));
	if (n_node == NULL)
		return (0);
	n_node->key = strdup(key);
	if (n_node->key == NULL)
	{
		free(n_node);
		return (0);
	} n_node->value = strdup(value);
	if (n_node->value == NULL)
	{
		free(n_node->key);
		free(n_node);
		return (0);
	} n_node->next = ht->array[index];
	ht->array[index] = n_node;
	return (1);
}
