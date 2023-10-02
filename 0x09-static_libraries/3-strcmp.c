#include "main.h"

/**
 * _strcmp - compare two dtrings
 * @s1: string1
 * @s2: string2
 * Return: the compared value
 */

int _strcmp(char *s1, char *s2)
{
	int p;

	for (p = 0 ; s1[p] != '\0' || s2[p] != '\0' ; p++)
	{
		if (s1[p] != s2[p])
		{
			if (s1[p] < s2[p])
				return (s1[p] - s2[p]);
			else if (s2[p] < s1[p])
				return (s1[p] - s2[p]);
		}
	}
	return (0);
}
