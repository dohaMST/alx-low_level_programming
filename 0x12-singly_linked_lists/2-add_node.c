#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: the first elements of a linked list
 * @str: the string we gonna use
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int size = 0;

	while (str[size])
	size++;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = size;
	newNode->next = (*head);
	*head = newNode;
	return (*head);
}
