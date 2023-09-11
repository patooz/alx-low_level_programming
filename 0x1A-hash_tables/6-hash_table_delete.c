#include "hash_tables.h"

/**
 * hash_table_delete - hash_table_delete
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *h = ht;
	hash_node_t *i, *j;
	unsigned long int k;

	for (k = 0; k < ht->size; k++)
	{
		if (ht->array[k] != NULL)
		{
			i = ht->array[k];
			while (i != NULL)
			{
				j = i->next;
				free(i->key);
				free(i->value);
				free(i);
				i = j;
			}
		}
	}
	free(h->array);
	free(h);
}
