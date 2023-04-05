#include "main.h"

/**
 * _strlen - length of thr string
 * @s: length of the string
 * Return: length of the string
 */
int  _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));

}
/**
 * _check_pal - check if the string is a palindrome
 * @s: string
 * @i: left index
 * @j: right index
 * Return: 1 if palindrome else 0
 */
int _check_pal(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (s[i] != s[j])
		return (0);
	return (_check_pal(s, i + 1, j - 1));
}
/**
 * is_palindrome - if a string is a palindrome or not
 * @s: string
 * Return: 1 if palindrome else 0
 */
int is_palindrome(char *s)
{
	return (_check_pal(s, 0,  _strlen(s) - 1));
}
