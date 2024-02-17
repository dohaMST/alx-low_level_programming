#include "hash_tables.h"
/**
 * hash_table_delete - a function that delets a hash table
 * @ht: the hash table
 * Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *tmp;

	if (!ht || (ht->size) == 0)
		return;
	for (i = 0; i < (ht->size); i++)
	{
		if (ht->array[i])
		{
			current = ht->array[i];
			while (current)
			{
				tmp = current;
				current = current->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
			}
			if (current)
				ht->array[i] = NULL;
		}
	}
	free(ht->array);
	free(ht);
}
