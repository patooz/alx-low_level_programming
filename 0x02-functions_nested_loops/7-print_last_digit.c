#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be processed
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int result;

	result = n % 10;
	if (result < 0)
		result = -result;
	_putchar('0' + result);
	return (result);
}
