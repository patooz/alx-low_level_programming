#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * Description: print Fizz for multiples of 3
 * Buzz for multiples of 5
 * FizzBuzz for both multiples
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	i = 1;
	printf("%d", i);
	for (i = 2; i <= 100; i++)
	{
		printf(" ")
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0)
				printf("Fizz");
			if (i % 5 == 0)
				printf("Buzz")
		}
		else
		{
			printf("%d", i);
		}

	}
	printf("\n");
	return (0);
}
