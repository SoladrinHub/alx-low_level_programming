#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all arguments it receives.
 * @argc: argument1
 * @argv: argument2
 * Return: number
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf(" %d %s\n", i, argv[i]);

	}
	return (0);
}
