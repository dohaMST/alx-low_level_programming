#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list.
 * @head: the first element of alinked list
 * @index: the index of node
 * Return:  returns the nth node of a listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	 unsigned int x = 0;
	listint_t *current = head;

	if (!head)
		return (NULL);
	while (current && x < index)
	{
		current = current->next;
		x++;
	}
	if (!current)
		return (NULL);
	return (current);
}
