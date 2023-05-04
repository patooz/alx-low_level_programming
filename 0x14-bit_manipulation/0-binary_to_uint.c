#include "main.h"

/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: pointet to a string
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int x = 0;
	unsigned int y = 0;

	if (b == NULL)
		return (0);
	while  (b[x] == '0' || b[x] == '1')
	{
		y <<= 1;
		y += b[x] - '0';
		i++;
	}
	return (y);

}
