#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list
 * @head: array of linked list structures
 * @str: string to be added to the node
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	list_t *temp;
	size_t size = 0;

	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	for (; str[size] != '\0'; size++)
		;
	node->len = size;
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = node;
	}
	return (node);
}
