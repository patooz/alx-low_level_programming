#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: NULL if failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k1, k2;
	char *m;

	k1 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; ++i)
		++k1;
	k2 = k1 + n;
	m = malloc(sizeof(char) * (k2 + 1));
	if (!m)
		return (NULL);
	for (i = 0; i < k1; ++i)
		m[i] = s1[i];
	for (j = 0; j < n; ++j, ++i)
		m[i] = s2[j];
	m[i] = '\0';
	return (m);
}
