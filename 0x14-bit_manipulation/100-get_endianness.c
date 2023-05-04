#include "main.h"

/**
 * get_endianness - checjs the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	char i;
	unsigned int j;

	j = 1;
	i = (char *) &j;
	return ((int)*i);
}
