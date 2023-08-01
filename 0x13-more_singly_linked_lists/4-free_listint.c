#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: the first element to a linked list
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
