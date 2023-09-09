#include "main.h"
#include <stdio.h>

/**
 * main - prints a name of the program
 *@argc: argument count
 *@argv: argument array
 *Return: the name of the program
 *if renamed, prints the new name without compilation
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	printf("%s\n", argv[0]);
	return (0);
}
