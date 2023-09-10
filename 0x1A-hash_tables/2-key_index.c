#include "hash_tables.h"

/**
 * key_index - gives an index of a key
 * @key: the key
 * @size: size of the array
 * Return: the index at which the key value is stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
