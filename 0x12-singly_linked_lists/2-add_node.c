#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to the first node in list
 * @str: value of added node
 * Return: returns the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	size_t size;

	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	for (size = 0; str[size]; size++)
		;
	node->len = size;
	node->next = *head;
	*head = node;
	return (*head);
}
