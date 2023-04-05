#include "main.h"

/**
 * factorial - factorial of a given number
 * @n: integer to be factored
 * Return: -1 if n is less than 0
 * factorial of 0 is 1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
