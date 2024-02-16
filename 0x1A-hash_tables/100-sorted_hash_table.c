#include "hash_tables.h"
/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 * or NULL if it fails
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}

/**
 * shash_table_set - adds an element to the sorted hash table
 * @ht: sorted hash table
 * @key: key; cannot be an empty string
 * @value: value associated with the key; must be duplicated
 * Return: 1 if it succeeds, else 0.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *current, *prev;
	unsigned long int index;

	if (!ht || !key || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	prev = NULL;
	while (current && strcmp(current->key, key) < 0)
	{
		prev = current;
		current = current->next;
	} new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	} new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	} new_node->next = current;
	if (prev == NULL)
		ht->array[index] = new_node;
	else
		prev->next = new_node;
	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key.
 * @ht: sorted hash table to look into
 * @key: key to search for
 * Return: value associated with the element
 * or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current;
	unsigned long int index;

	if (!ht || !key || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current && strcmp(current->key, key) != 0)
	{
		current = current->next;
	} return (current ? current->value : NULL);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;
	int first = 1;

	printf("{");
	current = ht->shead;
	while (current)
	{
		if (!first)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		first = 0;
		current = current->snext;
	} printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *next;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
	} free(ht->array);
	while (ht->shead)
	{
		current = ht->shead;
		ht->shead = current->snext;
		free(current->key);
		free(current->value);
		free(current);
	} free(ht);
}
