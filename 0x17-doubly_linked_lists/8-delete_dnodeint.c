#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes a node of list
 * @head: the head of the list
 * @index: the index
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp1 = *head, *tmp2;
	unsigned int i = 0;

	if (tmp1 != NULL)
		while (tmp1->prev != NULL)
			tmp1 = tmp1->prev;
	while (tmp1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = tmp1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				tmp2->next = tmp1->next;
				if (tmp1->next != NULL)
					tmp1->next->prev = tmp2;
			}
			free(tmp1);
			return (1);
		}
		tmp2 = tmp1;
		tmp1 = tmp1->next;
		i++;
	}
	return (-1);
}
