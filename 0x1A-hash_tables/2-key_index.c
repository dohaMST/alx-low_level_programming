#include "hash_tables.h"
/**
 * key_index - a function that calclates the index of a key
 * @key: the key of hash_table
 * @size: size of the array
 * Return: the index
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	idx = hash_djb2(key) % size;
	return (idx);
}
