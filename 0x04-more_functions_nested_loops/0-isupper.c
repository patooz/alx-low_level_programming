#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if the character is upper or not
 * @c: character to be checked
 * Return: 0 if true else 1
 */
int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
