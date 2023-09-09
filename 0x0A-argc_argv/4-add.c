#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument string
 * Return: sum of positive numbers, else,
 * 0 if no number passed
 * Error if one of the number contains symbols
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	unsigned int k;
	char *j;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			j = argv[i];
			for (k = 0; k < strlen(j); k++)
			{
				if (j[k] < 48 || j[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(j);
			j++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
