#include "main.h"

/**
 * _strcpy - string
 * @dest: destination
 * @src: src
 * Return: destination
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
