#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: linked list
 * Return: returns the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	for (; h != NULL; size++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (size);
}
