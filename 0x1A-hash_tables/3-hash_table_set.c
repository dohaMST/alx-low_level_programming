#include "hash_tables.h"
/**
 * hash_table_set - a function that sets an elemnt
 * @ht: tha hash table
 * @key: the key
 * @value: the value
 * Return: 0 or 1
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;
	unsigned long int index;

	if (ht == NULL)
		return (0);

	if (key == NULL || strlen(key) == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	item = add_node(&(ht->array[index]), key, value);
	if (!item)
		return (0);
	return (1);
}
/**
 * add_node - a function that adds the node
 * @head: the head
 * @key: the key
 * @value: the value
 * Return: the added node
 */

hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *item;

	item = *head;

	while (item)
	{
		if (strcmp(item->key, key) == 0)
		{
			free(item->value);
			item->value = strdup(value);
			return (*head);
		}
		item = item->next;
	}

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (NULL);

	item->key = strdup(key);
	item->value = strdup(value);
	item->next = *head;
	*head = item;
	return (*head);
}
