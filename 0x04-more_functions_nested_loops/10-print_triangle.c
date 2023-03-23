#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: a triangle made of # characters
 */
void print_triangle(int size)
{
	int i, j;

	if (size < 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if ((j <= i - 1))
				_putchar(32);
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
