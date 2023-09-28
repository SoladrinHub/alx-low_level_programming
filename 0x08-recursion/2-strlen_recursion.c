#include "main.h"

/**
 * _strlen_recursion - Entry function
 * @s: string to return the length
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}
