0-hash_table_create.c
#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *current;
	char *value_copy;
	unsigned long int idx, i;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	current = ht->array[idx];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (!current->value)
				return (0);
			return (1);
		}
		current = current->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new->value);
		free(new->key);
		free(new);
		return (0);
	}
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
