#include "main.h"

/**
 *print_number - prints an integer
 *@n: parameter to be processed
 *Return: interger
 */
void print_number(int n)
{
	unsigned int i;

	i = n;
	if (n < 0)
	{
		_putchar('-');
		a = -n;
	}
	if (a / 10 != 0)
		print_number(a / 10);
	_putchar((a % 10) + '0');
}
