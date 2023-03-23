#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *@n: times to print whitespaces
 * Return: straight line in the terminal
 */
void print_line(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('\n');

	}
	else
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
