#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatinates two strings
 * @s1: first string
 * @s2: second string
 * Return: points to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2
 * if NULL is passed, treat it as an empty string
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, l1, l2;
	char *k;

	if (s2 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; ++i)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; ++j)
			;
	}
	l1 = 1 + i + j;
	k = malloc(l1 * sizeof(char));
	if (k == NULL)
		return (NULL);
	for (l2 = 0; l2 < i; ++l2)
		s[l2] = s1[l2];
	for (l2 = 0; l2 < j; ++l2)
		s[l2 + i] = s2[l2];
	s[i + j] = '\0';
	return (s);
}
