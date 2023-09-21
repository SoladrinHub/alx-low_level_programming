#include "main.h"

/**
 * _strcat - this will concatenate two strings
 * @src: source string
 * @dest: destination string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int srclen = 0;
	int destlen = 0;
	int j;

	for (j = 0 ; dest[j] != '\0' ; j++)
		destlen++;
	for (j = 0 ; src[j] != '\0' ; j++)
		srclen++;
	for (j = 0 ; j <= srclen ; j++)
		dest[destlen + j] = src[j];
	return (dest);
}

