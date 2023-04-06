#include "main.h"
#define NULL 0

/**
 * _strstr - locates a substring
 * @needle: first string
 * @haystack: second string
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = j = 0;
	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
				break;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + i);
		j = 0;
		i++;
	}
	return (NULL);
}
