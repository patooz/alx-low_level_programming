#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: 0 (success)
 */
int main(void)
{
	long a, maxn;
	long num = 612852475143;
	double square = sqrt(num);

	for (a = 1; a <= square; a++)
	{
		if (num % a == 0)
		{
			maxn = num / a;
		}
	}
	printf("%ld\n", maxn);
	return (0);
}
