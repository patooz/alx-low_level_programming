#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: checked letter
 * Return: 0 (success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
