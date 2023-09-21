#include "main.h"

/**
 * string_toupper - change all lower case letters of this string to upper case
 * @n: number
 * Return: n
 */

char *string_toupper(char *n)
{
	int j;

	j = 0;

	while (n[j] != '\0')
	{
		if (n[j] >= 97 && n[j] <= 122)
			n[j] = n[j] - 32;
		j++;
	}
	return (n);
}

