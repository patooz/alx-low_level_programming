#include "3-calc.h"

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int (*p)(int, int);
	int a, b;

	if (argc != 4)
		printf("Error\n"), exit(98);
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	p = get_op_func(argv[2]);
	if (!p)
		printf("Error\n"), exit(99);
	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
		printf("Error\n"), exit(100);
	printf("%d\n", p(a, b));
	return (0);
}
