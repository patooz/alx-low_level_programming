#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: character to be processed
 * Return - have of the string
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0')
		;
	for (j = (i + 1) / 2; j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
