#include "hash_tables.h"
/**
 * shash_table_print_rev - prints a sorted hash table in reverse order
 * @ht: sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;
	int first = 1;

	printf("{");
	current = ht->stail;
	while (current != NULL)
	{
		if (!first)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		first = 0;
		current = current->sprev;
	}
	printf("}\n");
}
