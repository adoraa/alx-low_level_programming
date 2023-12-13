#include "lists.h"
/**
* listint_len - number of elements in a linked listint_t list
* @h: linked list
* Return: returns number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	for (; h != NULL; size++)
		h = h->next;
	return (size);
}
