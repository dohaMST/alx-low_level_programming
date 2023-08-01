#include "lists.h"

/**
 * insert_nodeint_at_index -  a function that inserts a new node
 * at a given position.
 * @head: the first element of a linked list
 * @idx: the index
 * @n: the data we gonna insert
 * Return: a new linked list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newNode;
	listint_t *current = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode || !head)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	for (i = 0; current && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newNode->next = current->next;
			current->next = newNode;
			return (newNode);
		}
		else
			current = current->next;
	}

	return (NULL);
}
