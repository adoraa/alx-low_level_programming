#include "lists.h"
/**
 * reverse_listint - reverses node order of a listint_t list
 * @head: list to reverse
 * Return: returns pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *rev = 0;

	while (*head)
	{
		temp = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = temp;
	}
	*head = rev;
	return (*head);
}
