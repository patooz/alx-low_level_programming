#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a givrn index
 * @index: index starting from 0
 * @n: pointer to the index
 * Return: 1 if it works, -1 if an error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);
	i = 1 << index;
	if (*n & i)
		*n ^= 1;
	return (1);
}
