#include "main.h"

/**
 * print_rev - this will help me print string in reverse
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int j;
	int count = 0;

	for (j = 0 ; s[j] != '\0' ; j++)
		count++;
	for (j = count - 1 ; j >= 0 ; j--)
		_putchar(s[j]);
	_putchar('\n');
}
