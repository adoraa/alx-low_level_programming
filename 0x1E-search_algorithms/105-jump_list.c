#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in a sorted list of integers
 *             using the Jump search algorithm
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 *
 * Return: a pointer to the first node where value is located,
 *         or NULL if value is not present or list is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size);
	listint_t *prev = NULL, *current = list;

	if (list == NULL)
		return (NULL);

	while (current != NULL && current->n < value)
	{
		prev = current;
		for (size_t i = 0; current->next != NULL && i < step; i++)
			current = current->next;
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);

	current = prev;
	while (current != NULL && current->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		prev = current;
		current = current->next;
	}

	if (current != NULL && current->n == value)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		return (current);
	}

	return (NULL);
}
