#include "main.h"
#include <stdio.h>

/**
 * print_rev - rints a string, in reverse, followed by a new line.
 * @s: string to be processed
 * Return: a reversed string
 */
void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (j = i - 1; j <= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
