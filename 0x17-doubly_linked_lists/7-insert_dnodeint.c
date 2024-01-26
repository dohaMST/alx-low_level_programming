#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node in a list
 * @h: the head of the list
 * @idx: the index
 * @n: the value of the new element
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nv_node;
	dlistint_t *tmp;
	unsigned int i;

	nv_node = NULL;
	if (idx == 0)
		nv_node = add_dnodeint(h, n);
	else
	{
		tmp = *h;
		i = 1;
		if (tmp != NULL)
			while (tmp->prev != NULL)
				tmp = tmp->prev;
		while (tmp != NULL)
		{
			if (i == idx)
			{
				if (tmp->next == NULL)
					nv_node = add_dnodeint_end(h, n);
				else
				{
					nv_node = malloc(sizeof(dlistint_t));
					if (nv_node != NULL)
					{
						nv_node->n = n;
						nv_node->next = tmp->next;
						nv_node->prev = tmp;
						tmp->next->prev = nv_node;
						tmp->next = nv_node;
					}
				}
				break;
			}
			tmp = tmp->next;
			i++;
		}
	}
	return (nv_node);
}
