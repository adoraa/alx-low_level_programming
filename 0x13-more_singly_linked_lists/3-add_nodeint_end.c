#include "lists.h"
/**
* add_nodeint_end - adds a new node at the end of a listint_t list
* @head: linked list
* @n: node data
* Return: returns address of new node or NULL if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
		if (*head != NULL)
		{
			while (temp->next != NULL)
				temp = temp->next;
			temp->next = new;
		}
		else
			*head = new;
	}
	return (new);
}
