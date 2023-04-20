#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed
 * @n: numbe rof strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list l;

	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(l. char *);
		if (s)
		{
			printf("%s", s);
		}
		else
		{
			printf("(nil)");
		}
		if (i < n - 1)
		{
			if (separator)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(l);
}
