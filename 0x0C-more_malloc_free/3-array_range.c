#include "main.h"
#include<stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *str;
	int i;

	if (min > max)
		return (NULL);
	str = malloc(sizeof(int) * (max - min + 1));
	if (!str)
		return (NULL);
	for (i = 0; i <= (max - min); i++)
		str[i] = min + i;
	return (str);
}
