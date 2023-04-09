#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: argument count
 * argv: argument string
 * Return: number of arguments passed
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc);
	return (0);
}
