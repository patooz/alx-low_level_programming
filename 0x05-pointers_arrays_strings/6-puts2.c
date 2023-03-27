#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every character of a string
 * @str: character to be processed
 * Return: characters of a string starting with the first one
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (i % 2 == 0)
			_putchar(str[i]);
	_putchar('\n');
}
