#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @s: character to be processed
 * Return: Encoded string
 */
char *leet(char *s)
{
	int a = 0, b = 0, c = 5;
	char k[5] = {'A', 'E', 'O', 'T', 'L'};
	char l[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		b = 0;

		while (b < c)
		{
			if (s[s] == k[b] || s[a] - 32 == k[b])
			{
				s[a] = l[b];
			}
			b++;
		}
		a++;
	}
	return (s);
}
