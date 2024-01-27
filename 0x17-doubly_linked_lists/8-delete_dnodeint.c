#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list.
 * @head: pointer to the head of the list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeds, -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node, *temp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	node = *head;
	if (index == 0)
	{
		*head = node->next;
		if (*head)
			(*head)->prev = NULL;
		free(node);
		return (1);
	}
	while (node && i < index)
	{
		node = node->next;
		i++;
	}
	if (node == NULL)
		return (-1);
	temp = node->prev;
	temp->next = node->next;
	if (node->next)
		node->next->prev = temp;
	free(node);
	return (1);
}
