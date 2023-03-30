#include "main.h"

/**
 * *cap_string - capitalizes all words of a string.
 * @s: character to be processed
 * Return: capitolized letters
 */
char *cap_string(char *s)
{
	int i = 0, j;
	int k = 13;
	char l[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[i])
	{
		j = 0;

		while (j < k)
		{
			if ((i == 0 || s[i - 1] == l[j]) && (s[i] >= 97 && s[i] <= 122))
				s[i] -= 32;
			j++;
		}
		i++;
	}
	return (s);
}
