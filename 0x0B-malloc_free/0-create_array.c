#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars
 * @size: integer size in bytes
 * @c: character
 * Return: NULL if size is 0, else
 * pointer to the array, or Null if iy fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *j;

	if (size == 0)
		return (NULL);
	j = malloc(size * sizeof(char));
	if (j == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(j + i) = c;
	}
	return (j);
}
