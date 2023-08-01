#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index index
 * of a listint_t linked list.
 * @head: the first element of a linked list
 * @index: the index of node
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aide = *head;
	listint_t *current = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(aide);
		return (1);
	}

	while (x < index - 1)
	{
		if (!aide || !(aide->next))
			return (-1);
		aide = aide->next;
		x++;
	}
	current = aide->next;
	aide->next = current->next;
	free(current);
	return (1);
}
