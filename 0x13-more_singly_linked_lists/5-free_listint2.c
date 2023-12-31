#include "lists.h"
/**
* free_listint2 - frees a listint_t list
* @head: linked list
* Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *temp_node = NULL;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp_node = (*head)->next;
		free(*head);
		(*head) = temp_node;
	}
}
