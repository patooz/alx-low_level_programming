#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: segment of string
 * @accept: bytes
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, c;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		c = o;
		for (b = 0; *(accept + b != '\0'; b++))
		{
			if (*(s + a) == *(accept + b))
			{
				c = 1;
				break;
			}
		}
		if (!c)
			return (a);
	}
	return (0);
}
