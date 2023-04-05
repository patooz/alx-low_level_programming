#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: pointer of character to be printed
 * Return: printef string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
