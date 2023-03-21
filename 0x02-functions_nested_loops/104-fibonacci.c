#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 (success)
 */
int main(void)
{
	int a = 1, b = 2, c, d;

	printf("%d, %d, ", a, b);
	for (d = 2; d < 98; d++)
	{
		c = a + b;
		printf("%d", c);
		if (d != 97)
		{
			printf(", ");
		}
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
