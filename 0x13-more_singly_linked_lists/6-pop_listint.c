#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t linked
 * list, and returns the head node’s data (n).
 * @head: the first element of a linked list*
 * Return: returns the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int x;

	if (!head || !*head)
		return (0);

	x = (*head)->n;
	current = (*head)->next;
	free(*head);
	*head = current;

	return (x);
}
