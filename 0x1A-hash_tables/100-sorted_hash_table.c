#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - makes a sorted hash table
 * @size: size of the hash table
 * Return: NULL on error, else pointer to the ht
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *i;
	unsigned long int j;

	i = malloc(sizeof(shash_table_t));
	if (i == NULL)
		return (NULL);
	i->size = size;
	i->array = malloc(sizeof(shash_node_t *) * size);
	if (i->array == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		i->array[j] = NULL;
	i->shead = NULL;
	i->stail = NULL;
	return (i);
}

/**
 * shash_table_set - adds an item to the table
 * @ht: hash table
 * @key: the added key
 * @value: value of the key
 * Return: 0 on success, 1 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *i, *j;
	char *v;
	unsigned long int k;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	v = strdup(value);
	if (v == NULL)
		return (0);
	k = key_index((const unsigned char *)key, ht->size);
	j = ht->shead;
	while (j)
	{
		if (strcmp(j->key, key) == 0)
		{
			free(j->value);
			j->value = v;
			return (1);
		}
		j = j->snext;
	}
	i = malloc(sizeof(shash_node_t));
	if (i == NULL)
	{
		free(v);
		return (0);
	}
	i->key = strdup(key);
	if (i->key == NULL)
	{
		free(v);
		free(i);
		return (0);
	}
	i->value = v;
	i->next = ht->array[k];
	ht->array[k] = i;
	if (ht->shead == NULL)
	{
		i->sprev = NULL;
		i->snext = NULL;
		ht->shead = i;
		ht->stail = i;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		i->sprev = NULL;
		i->snext = ht->shead;
		ht->shead->sprev = i;
		ht->shead = i;
	}
	else
	{
		k = ht->shead;
		while (k->snext != NULL && strcmp(k->snext->key, key) < 0)
			k = k->snext;
		i->sprev = k;
		i->snext = k->next;
		if (k->snext == NULL)
			ht->stail = i;
		else
			k->snext->sprev = i;
		k->snext = i;
	}
	return (1);
}

/**
 * shash_table_get - gets the value of the key
 * @ht: hash table
 * @key: the value key
 * Return: NULL if key mismatch, else value of the key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *i;
	unsigned long int k;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	k = key_index((const unsigned char *)key, ht->size);
	if (k >= ht->size)
		return (NULL);
	i = ht->shead;
	while (i != NULL && strcmp(i->key, key) != 0)
		i = i->snext;
	return ((i == NULL) ? NULL : i->value);
}

/**
 * shash_table_print - prints the hash table
 * @ht: pointer to the hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *i;

	if (ht == NULL)
		return;
	i = ht->shead;
	printf("{");
	while (i != NULL)
	{
		printf("'%s': '%s'", i->key, i->value);
		i = i->snext;
		if (i != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print the hash tables key/value pairs in reverse
 * @ht: pointer to the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *i;

	if (ht == NULL)
		return;
	i = ht->stail;
	printf("{");
	while (i != NULL)
	{
		printf("'%s': '%s'", i->key, i->value);
		i = i->sprev;
		if (i != NULL)
			printf(", ");
	}
	 printf("}\n");
}

/**
 * shash_table_delete - deletes the hash table
 * @ht: pointer to the hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *h = ht;
	shash_node_t *i, *k;

	if (ht == NULL)
		return;
	i = ht->shead;
	while (i)
	{
		k = i->snext;
		free(i->key);
		free(i->value);
		free(i);
		i = k;
	}
	free(head->array);
	free(head);
}
