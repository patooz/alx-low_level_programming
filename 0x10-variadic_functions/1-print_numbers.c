#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed
 * @n: number of integers
 * Return: printed numbers, If separator is NULL, don’t print it
 * Print a new line at the end of function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list l;

	va_start(l, n);
	if (separator == NULL)
	{
		separator = "";
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(l, int));
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(l);
}
