#include "main.h"

/**
 * _memset - function to fill memory with a constant byte
 * @s: pointer
 * @b: value
 * @n: number of bytes
 * Return: new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0 ; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
