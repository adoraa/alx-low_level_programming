#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head of a list
 * Return: returns the address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *prev = head;
	listint_t *loop = head;

	if (head == NULL)
		return  (NULL);
	if (head == head->next)
		return (head);
	while (prev)
	{
		prev = prev->next;
		loop = head;
		while (prev && loop != prev)
		{
			if (loop == prev->next)
				return (loop);
			loop = loop->next;
		}
	}
	return (prev);
}
