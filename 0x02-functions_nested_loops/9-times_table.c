#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (c <= 9)
					_putchar(' ');
			}
			if (c <= 9)
			{
				_putchar('0' + c);
			}
			else
			{
				_putchar('0' + (c / 10));
				_putchar('0' + (c % 10));
			}
		}
		_putchar('\n');
	}
}
