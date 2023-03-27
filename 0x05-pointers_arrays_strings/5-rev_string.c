#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: character to be processed
 * Return: a string in reverse
 */
void rev_string(char *s)
{
	int i, j;
	char k;

	j =  _strlen(s);
	for (i = 0; i < j / 2; i++)
	{
		k = s[i];
		s[i] = s[j - 1 - i];
		s[j - 1 - i] = k;
	}
}
