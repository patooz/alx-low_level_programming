#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: argument number
 * @av: argument pointer
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, l = 0;
	char *m;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
		l++;
	}
	l++;
	m = malloc(l * sizeof(char));
	if (m == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			m[k] = av[i][j];
			k++;
		}
		m[k] = '\n';
		k++;
	}
	m[k] = '\0';
	return (m);
}
