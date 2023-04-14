#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * error_exit - checks if number of arguments is incorrect
 * Return: nothing
 */
void error_exit(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * is_positive_int - checks if the arguments are positive digits
 * @str: pointer to the string
 * Return: 1
 */
int is_positive_int(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * string_to_int_array - converts strings to arrays of integers
 * @str: pointer to the string
 * @size: size of the string
 * Return: array
 */
int *string_to_int_array(char *str, int *size)
{
	int len = strlen(str);
	int *arr = (int *) malloc(len * sizeof(int));
	int i;

	for (i = 0; i < len; i++)
	{
		arr[i] = str[i] - '0';
	}
	*size = len;
	return (arr);
}
/**
 * print_int_array - prints the array
 *@arr: pointer to the array
 *@size: size of the array
 */
void print_int_array(int *arr, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}
/**
 * multiply - multiplies two digits
 * @a: pointer to size of integer a
 * @b: pointer to the size og integer b
 * @a_size: size of integer a
 * @b_size: size of integer b
 * @result_size: pointer to the size of results
 *Return: product of the two digits
 */
int *multiply(int *a, int a_size, int *b, int b_size, int *result_size)
{
	int max_size = a_size + b_size;
	int *result = (int *) malloc(max_size * sizeof(int));

	memset(result, 0, max_size * sizeof(int));
	int i;

	for (i = 0; i < b_size; i++)
	{
		int carry = 0;
		int j;

		for (int j = 0; j < a_size; j++)
		{
			int temp = result[i + j] + b[i] * a[j] + carry;

			result[i + j] = temp % 10;
			carry = temp / 10;
		}
		if (carry)
			result[i + a_size] += carry;
	}
	while (max_size > 0 && result[max_size - 1] == 0)
		max_size--;
	*result_size = max_size;
	return (result);
}
/**
 * main - prints thr results
 * @argc: argument count
 * @argv: argument string
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc != 3 || !is_positive_int(argv[1]) || !is_positive_int(argv[2]))
		error_exit();
	int num1_size, num2_size, result_size;
	int *num1 = string_to_int_array(argv[1], &num1_size);
	int *num2 = string_to_int_array(argv[2], &num2_size);
	int *result = multiply(num1, num1_size, num2, num2_size, &result_size);

	print_int_array(result, result_size);
	free(num1);
	free(num2);
	free(result);
	return (0);
}
