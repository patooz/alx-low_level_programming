#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (!s)
		exit(98);
	return (s);
}
