#include "main.h"
/**
 * _memcpy - function that is used to copy memory area
 * @n: bytes
 * @src: source memory
 * @dest: destination memory
 * Return: copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
