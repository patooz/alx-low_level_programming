#include <stdio.h>

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

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else if (i < 48 || i > 57)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 0; i < argv; i++)
		{
			sum += sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
