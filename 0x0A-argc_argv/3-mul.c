#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument string
 * Return: if arguments are not 2, print erro,
 * else print the product
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n" atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
