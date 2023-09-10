#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to be added
 * @key: key
 * @value: value associeterd with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *x;
	char *y;
	unsigned long int j, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	y = strdup(value);
	if (y == NULL)
		return (0);
	j = key_index((const unsigned char *)key, ht->size);
	for (i = j; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = y;
			return (1);
		}
	}
	x = malloc(sizeof(hash_node_t));
	if (x == NULL)
	{
		free(y);
		return (0);
	}
	x->value = y;
	x->next = ht->array[j];
	ht->array[j] = x;
	return (1);
}
