#include "variadic_functions.h"
/**
 * print_all - prints anythng
 * @format: list of types of arguments passed
 *
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list l;
	char *s;

	va_start(l, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(l, int));
				j = 0;
				break;
			case 'i':
				printf("%i", va_arg(l, int));
				j = 0;
				break;
			case 'f':
				printf("%f", va_arg(l, double));
				j = 0;
				break;
			case 's':
				s = va_arg(l, char*);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				j = 0;
				break;
			default:
				j = 1;
				break;
		}
		if (format[i + 1] != '\0' && j == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(l);
}
