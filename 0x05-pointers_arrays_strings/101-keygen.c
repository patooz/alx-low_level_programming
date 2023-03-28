#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * randomPass: randomly generates password
 * @N: lenght of random characters
 * Return: random password
 */
void randomPass(int N)
{
	int i = 0, random = 0;
	char numbers[] = "0123456789";
	char letters[] = "abcdefghijklmnoqprstuvwyzx";
	char LETTERS[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
	char symbols[] = "!@#$^&*?";
	char pass[N];

	srand((unsigned int) (time(NULL)));
	random = rand() % 4;
	for (i = 0; i < N; i++)
	{
		if (random == 1)
		{
			pass[i] = numbers[rand() % 10];
			random = rand() % 4;
			printf("%c", pass[i]);
		}
		else if (random == 2)
		{
			pass[i] = symbols[rand() % 8];
			random = rand() % 4;
			printf("%c", pass[i]);
		}
		else if (random == 3)
		{
			pass[i] = LETTERS[rand() % 26];
			random = rand() % 4;
			printf("%c", pass[i]);
		}
		else
		{
			pass[i] = letters[rand() % 26];
			random = rand() % 4;
			printf("%c", pass[i]);
		}
	}
}
int main(void)
{
	int N = 10;

	randomPass(N);
	return (0);
}
