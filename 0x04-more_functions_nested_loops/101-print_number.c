#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: 0 (success)
 */
void print_number(int n)
{
	unasigned int a = b;
	if (b < 0)
	{
		b *= -1;
		a = n;
		_putchar('-');
	}
	a /= 10;
	if (a != 0)
	{
		print_number(a);
	}
	_putchar((unasigned int) n % 10 + '0');
}
