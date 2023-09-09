#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a duplicate of the string str
 * @str: the string
 * Return: NULL if str = NULL
 *a pointer to the duplicate string on success and
 *Null if sufficient memmory
 */
char *_strdup(char *str)
{
	int i, j;
	char *k;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (*(str + j++))
		;
	k = malloc(j * sizeof(char));
	if (k == NULL)
		return (NULL);
	i = 0;
	while (*(str + i))
	{
		*(k + i) = *(str + i);
		++i;
	}
	*(k + i) = '\0';
	return (k);
}
