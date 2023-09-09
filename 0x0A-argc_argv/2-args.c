#include <stdio.h>

/**
 * main - prints all arguments it recieves
 * @argc: argument count
 * @argv: argument string
 * Return: all arguments including the first one
 * one argument per line
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
