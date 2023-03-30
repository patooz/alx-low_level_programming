#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: first string
 * @s2: second string
 * Return: 0 (success)
 */
int _strcmp(char *s1, char *s2)
{
	for (; *s1 != '\0' && *s2 != '\0'; s2++)
	{
		if  (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		if (*s1 != '\0')
			return (*s1);
		else if (*s2 != '\0')
			return (*s2);
	}
	return (0);
}
