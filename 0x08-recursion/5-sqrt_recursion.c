#include "main.h"

/**
 * _sqrt_recursion- finds the square root of a number
 * @n: integer
 * @a: integer to check the root of the number
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
/**
 * _sq_recursion- finds the square root of a number
 * @n: integer
 * Return: square root of a number,
 * if n has no natural number, returns -1
 */

int _sq_recursion(int n)
{
	return (_sqrt_recursion(n, 1));
}

