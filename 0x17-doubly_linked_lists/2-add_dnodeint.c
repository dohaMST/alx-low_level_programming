#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the beginning of a list
 * @head: the head of the list
 * @n: the value of the new element
 * Return: new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nv_node;
	dlistint_t *tmp;

	nv_node = malloc(sizeof(dlistint_t));
	if (nv_node == NULL)
		return (NULL);
	nv_node->n = n;
	nv_node->prev = NULL;
	tmp = *head;
	if (tmp != NULL)
	{
		while (tmp->prev != NULL)
			tmp = tmp->prev;
	}
	nv_node->next = tmp;
	if (tmp != NULL)
		tmp->prev = nv_node;
	*head = nv_node;
	return (nv_node);
}
