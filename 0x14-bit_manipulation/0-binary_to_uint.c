#include "main.h"

/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: pointer to the string
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0, y = 0;

	if (!b)
		return (0);
	while (b[x] != '\0')
	{
		return (0);
		y <<= 1;
		if (b[x] & 1)
			y += 1;
		x += 1;
	}
	return (y);
}
