#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table to look at
 * @key: key i am looking for
 * Return: value associated with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *i;
	unsigned long int j;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	j = key_index((const unsigned char *)key, ht->size);
	if (j >= ht->size)
		return (NULL);
	node = ht->array[j];
	while (i && strcmp(i->key, key) != 0)
		i = i->next;
	return ((i == NULL) ? NULL : i->value);
}
