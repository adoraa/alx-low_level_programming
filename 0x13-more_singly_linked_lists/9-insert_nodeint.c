#include "lists.h"
/**
* insert_nodeint_at_index - adds a new node at a given position
* @head: linked list
* @idx: index where new node will be added
* @n: new node data
* Return: returns the address of a new node or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = NULL;
	listint_t *temp_node = *head;
	unsigned int i = 0;

	if (head)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node)
		{
			new_node->n = n;
			new_node->next = NULL;
			if (idx == 0)
			{
				*head = new_node;
				new_node->next = temp_node;
				return (new_node);
			}
			for (; i < idx - 1 && temp_node != NULL; i++)
				temp_node = temp_node->next;
			if (temp_node != NULL)
			{
				new_node->next = temp_node->next;
				temp_node->next = new_node;
			}
			else
			{
				free(new_node);
				return (NULL);
			}
		}
	}
	return (new_node);
}
