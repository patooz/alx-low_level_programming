#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: byts from src
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		i++;
		j++;
	}
	return (dest);
}
