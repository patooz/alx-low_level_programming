#include "lists.h"
/**
 * my_first - finds the biggest number
 * @_name: username
 * @l: length of the username
 * Return: bigest number
 */
int my_first(char *_name, int l)
{
	int i;
	int j;
	unsigned int k;

	i = *_name;
	j = 0;
	while (j < l)
	{
		if (i < _name[j])
			i = _name[j];
		j += 1;
	}
	srand(i ^ 14);
	k = rand();
	return (k & 63);
}
/**
 * my_second - multiplys charactes of username
 * @_name: username
 * @l: length of username
 * Return: multiple of the character
 */
int my_second(char *_name, int l)
{
	int i;
	int j;

	i = j = 0;
	while (j < l)
	{
		i = i + _name[j] * _name[j];
		j += 1;
	}
	return (((unsigned int)i ^ 239) & 63);
}
/**
 * my_third - gets the random character
 * @_name: username
 * Return: random character
 */
int my_third(char *_name)
{
	int i;
	int j;

	i = j = 0;
	while (j < *_name)
	{
		i = rand();
		j += 1;
	}
	return (((unsigned int)i ^ 229) & 63);
}
/**
 * my_fourth - entry point
 * @argc: argument count
 * @argv: argument array
 * Return: 0
 */
int my_fourth(int argc, char **argv)
{
	char generator[7];
	int l, i, j;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37,
		0x4d6e706762695432, 0x74767a5835737956,
		0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850
	};
	(void) argc;
	for (l = 0; argv[1][l]; l++)
		;
	generator[0] = ((char *)alph)[(l ^ 59) & 63];
	i = j = 0;
	while (j < l)
	{
		i = i + argv[1][j];
		j = j + 1;
	}
	generator[1] = ((char *)alph)[(i ^ 79) & 63];
	i = 1;
	j = 0;
	while (j < l)
	{
		i = argv[1][j] * i;
		j = j + 1;
	}
	generator[2] = ((char *)alph)[(i ^ 85) & 63];
	generator[3] = ((char *)alph)[my_first(argv[1], l)];
	generator[4] = ((char *)alph)[my_second(argv[1], l)];
	generator[5] = ((char *)alph)[my_third(argv[1])];
	generator[6] = '\0';
	for (i = 0; generator[i]; i++)
		printf("%c", generator[i]);
	return (0);
}
