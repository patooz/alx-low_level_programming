#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *i;
	unsigned long int j;
	unsigned char k = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
		{
			if (k == 1)
				printf(", ");
			i = ht->array[j];
			while (i != NULL)
			{
				printf("'%s': '%s'", i->key, i->value);
				i = i->next;
				if (i != NULL)
					printf(", ");
			}
			k = 1;
		}
	}
	printf("}\n");
}
