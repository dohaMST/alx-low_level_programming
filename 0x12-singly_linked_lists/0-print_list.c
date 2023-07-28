#include <stdio.h>
#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: the first element of a linked list
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		x++;
	}
	return (x);
}
