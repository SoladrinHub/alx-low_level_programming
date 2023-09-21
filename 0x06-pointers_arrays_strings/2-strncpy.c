#include "main.h"

/**
 * _strncpy - this will copy a string
 * @n: number
 * @dest: source destination
 * @src: source string
 * Return: retuen dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0 ; j < n && src[j] != '\0' ; j++)
		dest[j] = src[j];
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
