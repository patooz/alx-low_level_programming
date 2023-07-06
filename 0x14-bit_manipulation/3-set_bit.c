#include "main.h"

/**
 * set_bit - sets a value of a bit to 1
 * @index: index starting from 0
 * @n: pointer to the index
 * Return: 1 if it works, -1 if error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);
	i = 1 << index;
	*n = (*n | i);
	return (1);
}
