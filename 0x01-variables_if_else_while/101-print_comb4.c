#include <stdio.h>
/**
 * main - Entry point
 * Description:  prints combinations of three digits
 * Return: 0 (success)
 */
int main(void)
{
	int a, b, c;

	for (a = 48; a <= 55; a++)
	{
		for (b = a + 1; b <= 56; b++)
		{
			for (c = b + 1; c <= 57; c++)
			{
				putchar((char)a);
				putchar((char)b);
				putchar((char)c);
				if (a != 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
