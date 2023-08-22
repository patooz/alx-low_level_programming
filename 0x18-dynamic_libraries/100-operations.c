#include <stdio.h>
#include <stdlib.h>

/**
 * add - prints the sum of two numbers
 * @a: first number
 * @b: second number
 * Return: sum of a and b
 */
int add(int a, int b)
{
	int c = a + b;

	return (c);
}

/**
 * subtruct - prints the deference of two numbers
 * @a: first number
 * @b: second number
 * Return: deference of a and b
 */
int subtruct(int a, int b)
{
	int c;

	c = a - b;
	return (c);
}

/**
 * mul - prints the product of two numbers
 * @a: first number
 * @b: second number
 * Return: product of a and b
 */
int mul(int a, int b)
{
	int prod;

	prod = a * b;
	return (prod);
}

/**
 * div - prints the division of two numbers
 * @a: first number
 * @b: second number
 * Return: dividion of a and b
 */
int division(int a, int b)
{
	int c;

	c = a / b;
	return (c);
}

/**
 * modul - prints the modulus of two numbers
 * @a: first number
 * @b: second number
 * Return: modulus of a and b
 */
int modul(int a, int b)
{
	int c;

	c = a % b;
	return (c);
}

