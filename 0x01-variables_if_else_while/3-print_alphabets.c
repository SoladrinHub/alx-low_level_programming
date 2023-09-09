#include <stdio.h>

/**
 * main - entry point
 *
 * Return 0
 *
 */

int main(void)
{
	char read[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(read[i]);
	}
	putchar('\n');
	return (0);
}
