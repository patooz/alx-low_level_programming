#include <stdio.h>

/**
 * main - Entry point
 * Description: prints combinations of two two-digit numbers
 * Return: 0 (success)
 */
int main(void)
{
	int a, b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a < b)
			{
				putchar(a / 10 + '0');
				putchar(a % 10 + '0');
				putchar(' ');
				putchar(b / 10 + '0');
				putchar(b % 10 + '0');
				if (a != 98 || b != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++b;
		}
		a++;
	}
	putchar('\n');
	return (0);
}

