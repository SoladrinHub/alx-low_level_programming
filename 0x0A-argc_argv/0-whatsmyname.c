#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print its name, folloewd by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: arguments
 */


int main(int argc, char *argv[])
{
	int i;

	printf(" %d\n", argc);

	for (i = 0; i < argc; i++)
	{
		printf(" %d : %s\n", i, argv[i]);
	}
	return (0);
}
