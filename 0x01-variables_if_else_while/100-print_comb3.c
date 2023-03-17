#include <stdio.h>
/**
 * main - Entry point
 * Description: Print the combination of 2 digits
 * Return: 0 (success)
 */
int main(void)
{
	int a, b;

	for (a = 48; a <= 56; a++)
	{
		for (b = a + 1; b <= 57; b++)
		{
			putchar((char)a);
			putchar((char)b);
			if (a != 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
