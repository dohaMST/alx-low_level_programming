#include "hash_tables.h"
/**
 * hash_table_delete - function that dekets a hash table.
 * @ht: hash_table
 * Return: NONE.
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *x;

	if (!ht || (ht->size) == 0)
		return;

	for (i = 0; i < (ht->size); i++)
	{
		if (ht->array[i])
		{
			current = ht->array[i];
			while (current)
			{
				x = current;
				current = current->next;
				free(x->key);
				free(x->value);
				free(x);
			}
			if (current)
				ht->array[i] = NULL;
		}
	}
	free(ht->array);
	free(ht);
}
