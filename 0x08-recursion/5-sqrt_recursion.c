#include "main.h"

/**
 * _sqrt_recursion- finds the square root of a number
 * @n: integer
 * Return: square root of a number,
 * if n has no natural number, returns -1
 */
int _sqrt_recursion(int n)
{
	int x;

	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (_sqrt_recursion(n, x + 1));
}
