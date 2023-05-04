#include "main.h"

/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: pointet to a string
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int y = 0;

	if (!c)
		return (0);
	for (x = 0; c[x]; x++)
	{
		if (c[x] < '0' || c[x] > '1')
			return (0);
		y = 2 * y + (c[x] - '0');
	}
	return (y);

}
