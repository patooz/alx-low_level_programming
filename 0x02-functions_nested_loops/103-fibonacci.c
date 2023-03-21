#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms not exceed 4000000
 *
 *
 * Return: 0 (success)
 */
int main(void)
{
	int a = 0;
	long b = 1, c = 2, result = c;

	while (c + b < 4000000)
	{
		c += b;
		if (c % 2 == 0)
			result += c;
		b = c - b;
		++a;
	}
	printf("%ld\n", result);
	return (0);
}
