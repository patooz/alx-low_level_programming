#include "main.h"

/**
 * _pow_recursion - returns the value of power of an integer
 * @x: integer
 * @y: power of x
 * Return: value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
