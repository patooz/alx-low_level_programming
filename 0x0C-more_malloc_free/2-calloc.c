#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: arrayof elements
 * @size: bytes
 * Return: pointer to the allocated memory
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str;

	if (!nmemb || !size)
		return (NULL);
	str = malloc(nmemb * size);
	if (!str)
		return (NULL);
	_memset(str, 0, nmemb * size);
	return (str);
}
/**
 * _memset - fills memory
 * @s: memory
 * @n: bytes
 * @b: constant byte
 * Return: pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
