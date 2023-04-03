#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer of the matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size);
{
	int b, c, i, j, k;

	j = 0;
	k = size - 1;
	b = c = 0;
	for (i = 0; i < size; i++, j += size + 1, k += size - 1)
	{
		b += *(a + j);
		c += *(a + k);
	}
	printf("%d, %d\n", a, b);
}
