#include "lists.h"
/**
* free_listint - frees a listint_t list
* @head: linked list
* Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *i = head;
	listint_t *count = NULL;

	for (; i != NULL; i = count)
	{
		count = i->next;
		free(i);
	}
}
