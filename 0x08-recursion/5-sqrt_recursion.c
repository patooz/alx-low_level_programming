#include "main.h"

/**
 * _sqrt_recursion- finds the square root of a number
 * @n: integer
 * Return: square root of a number,
 * if n has no natural number, returns -1
 */
int _sqrt_recursion(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (_sqrt_recursion(n, a + 1));
}
