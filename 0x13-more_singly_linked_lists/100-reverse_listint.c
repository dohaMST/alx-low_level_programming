#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: the first element of linked list
 * Return: a reversed linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *aide = NULL;
	listint_t *next = NULL;

	if (!head || !*head)
		return (NULL);
	aide = *head;
	*head = NULL;

	while (aide)
	{
		next = aide->next;
		aide->next = *head;
		*head = aide;
		aide = next;
	}
	return (*head);
}
