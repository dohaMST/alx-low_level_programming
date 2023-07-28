#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list_t list
 * @head: the first element of alinked list
 * @str: the string we gonna use
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *current = *head;
	unsigned int size = 0;

	while (str[size])
		size++;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = size;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (current->next)
		current = current->next;

	current->next = newNode;

	return (newNode);
}
