#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
		_putchar(az);
	_putchar('\n');
}
