#include "hash_tables.h"

/**
 * hash_table_create - creates tht hash table
 * @size: size of the array
 * Return: the size of the array
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int j;

	i = malloc(sizeof(hash_table_t));
	if (i == NULL)
		return (NULL);
	i->size = size;
	i->array = malloc(sizeof(hash_node_t *) * size);
	if (i->array == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		i->array[j] = NULL;
	return (i);
}
