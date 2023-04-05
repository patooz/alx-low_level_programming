#include "main.h"

/**
 * _prime - finds a prime number by outputting 1
 * @n: input integer
 * @a: checks if it is a prime number
 * Return: 1 if the input interger is a prime else 0
 */
int _prime(int n, int a)
{
	if (a * a > n)
		return (1);
	if (n % a == 0)
		return (0);
	return (_prime(n, a + 1));
}
/**
 * is_prime_number - finds a prime number by outputting 1
 * @n: input integer
 * Return: 1 if the input interger is a prime else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, 2));
}
