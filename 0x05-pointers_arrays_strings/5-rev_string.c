#include "main.h"

/**
 * rev_string - reverses a string
 * @s: character to be processed
 * Return: a string in reverse
 */
void rev_string(char *s)
{
	int i, j;
	char *a;

	j = _strlen(s);
	for (i = 0; i < j / 2; i++)
	{
		a = s[i];
		s[i] = s[j - 1 - i];
		s[j - 1 - i] = a;
	}
}
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
