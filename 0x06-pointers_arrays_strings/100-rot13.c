#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @s: parameter to be used
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i, j;
	char *k = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *l = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; k[j] != '\0'; j++)
		{
			if (s[i] == k[j])
			{
				s[i] = l[j];
				break;
			}
		}
	}
	return (s);
}
