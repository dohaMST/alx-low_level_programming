#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list.
 * @head: the first element of a linked list
 * Return: a new linked list
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *list1 = head;
	listint_t *list2 = head;

	if (!head)
		return (NULL);

	while (list1 && list2 && list2->next)
	{
		list2 = list2->next->next;
		list1 = list1->next;
		if (list2 == list1)
		{
			list1 = head;
			while (list1 != list2)
			{
				list1 = list1->next;
				list2 = list2->next;
			}
			return (list2);
		}
	}

	return (NULL);
}
