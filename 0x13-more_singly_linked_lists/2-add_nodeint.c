#include "lists.h"
/**
* add_nodeint - adds a new node at the beginning of a listint_t list
* @head: linked list
* @n: node data
* Return: returns the address of new node or NULL if it fails
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	return (new);
}
