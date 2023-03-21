#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * Return - 0 (success)
 */
void print_alphabet_x10(void)
{
	char az;
	int i;

	for (i = 0; i <= 10; i++)
		for (az = 'a'; az <= 'z'; az++)
			_putchar(az);
	_putchar('\n');
}
