#include "main.h"
#include <stdio.h>

/**
 * reverse_array
 * reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements of the array
 * Return: 0 (success)
 */
void reverse_array(int *a, int n)
{
	int b, c;

	for (b = 0; b < n / 2; b++)
	{
		c = a[b];
		a[b] = a[n - b - 1];
		a[n - b - 1]= c;
	}
}
