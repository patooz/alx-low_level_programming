#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers
 * @n: numbers to be processed
 * Return: natural numbers upto 98
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d", n);
		if (n > 98)
			n--;
		else if (n < 98)
			n++;
		printf(", ");
	}
	printf("%d", 98);
	printf("\n");
}
