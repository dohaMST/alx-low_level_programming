#include "hash_tables.h"

/**
 * hash_table_print - a functtion that prints key-value pairs
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, x = 0;
	hash_node_t *current;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				if (x > 0)
					printf(", ");
				printf("'%s': '%s'", current->key, current->value);
				current = current->next;
				x++;
			}
		}
	}
	printf("}\n");
}
