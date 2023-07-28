#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: the first element of a liknked ilst
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
