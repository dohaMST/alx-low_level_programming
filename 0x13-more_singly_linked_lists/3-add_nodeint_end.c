#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end
 * of a listint_t list.
 * @head: the first element of a linked list
 * @n: the data we gonna enter
 * Return: a pointer to a linked list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *current = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
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
