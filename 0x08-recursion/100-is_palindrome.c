#include "main.h"

int check_pal(char *s, int i, int len);

int is_palindrome(char *s);

/**
 * is_palindrome -checks if a string is palindrome
 * @s: string to reverse
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters
 * @s: string
 * @i: iterator
 * @len: length of string
 * Return: 1 if palindrome, or 0
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
