#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node of a list
 * @head: the head of the list
 * @index: the index of the node we are looking for
 * Return: the node or null (nothing)
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp;

	if (head == NULL)
		return (NULL);

	tmp = head;
	while (tmp)
	{
		if (index == i)
		return (tmp);
		i++;
		tmp = tmp->next;
	}
	return (NULL);
}
