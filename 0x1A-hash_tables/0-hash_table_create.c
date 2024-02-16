#include "hash_tables.h"
/**
 * hash_table_create - a function that creates new hash_table
 * @size: size of the array
 * Return: new hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTab;
	unsigned long int i;

	newTab = malloc(sizeof(hash_table_t));
	if (!newTab)
		return (NULL);
	newTab->size = size;
	newTab->array = malloc(size * sizeof(hash_node_t *));
	if (!(newTab->array))
	{
		free(newTab);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		newTab->array[i] = NULL;
	return (newTab);
}
