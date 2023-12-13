#include "lists.h"
/**
* pop_listint - deletes the head node of a listint list
* @head: linked list
* Return: returns data at head node
*/
int pop_listint(listint_t **head)
{
	listint_t *h = *head;
	int output = 0;

	if (h != NULL)
	{
		output = h->n;
		*head = h->next;
		free(h);
	}
	return (output);
}
