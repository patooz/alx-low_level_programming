#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: character to be processed
 * Return: a string in reverse
 */
void rev_string(char *s)
{
	int i, j, k;
	char *a, b;

	a = s;
	while (s[j] != '\0')
	{
		j++;
	}
	for (k = 1; k < c; k++)
	{
		a++;
	}
	for (i = 0; i < (j / 2); i++)
	{
		b = s[i];
		s[i] = *a;
		*a = b;
		a--;
	}
}
