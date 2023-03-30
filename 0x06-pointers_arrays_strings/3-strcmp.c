#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: first string
 * @s2: second string
 * Return: 0 (success)
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0, e;

	while (s1[a])
	{
		a++;
	}
	while (s2[b])
	{
		b++;
	}
	if (a <= b)
		e = a;
	else
		e = b;
	while (c <= e)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			d = s1[c] - s2[c];
			break;
		}
		c++;
	}
	return (d);

}
