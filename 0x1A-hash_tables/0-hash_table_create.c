#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: A pointer to the newly created hash table
 * or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *n_table = NULL;
	unsigned long int i;

	n_table = malloc(sizeof(hash_table_t));
	if (!n_table)
		return (NULL);
	n_table->array = malloc(sizeof(hash_node_t *) * size);
	if (n_table->array == NULL)
	{
		free(n_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		n_table->array[i] = NULL;
	n_table->size = size;
	return (n_table);
}
