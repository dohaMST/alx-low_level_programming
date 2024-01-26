#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the end of a list
 * @head: the head of the list
 * @n: the value of the new element
 * Return: new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp;
	dlistint_t *nv_node;

	nv_node = malloc(sizeof(dlistint_t));
	if (nv_node == NULL)
		return (NULL);
	nv_node->n = n;
	nv_node->next = NULL;
	tmp = *head;
	if (tmp != NULL)
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = nv_node;
	}
	else
	{
		*head = nv_node;
	}
	nv_node->prev = tmp;
	return (nv_node);
}
