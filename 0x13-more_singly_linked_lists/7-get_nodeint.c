#include "lists.h"
/**
* get_nodeint_at_index - gets the nth node of a listint_t list
* @head: linked list
* @index: nth node
* Return: returns nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = NULL;
	size_t i = 0;

	if (head != NULL)
	{
		node = head;
		for (i = 0; i < index && node != NULL; i++)
			node = node->next;
	}
	return (node);
}
