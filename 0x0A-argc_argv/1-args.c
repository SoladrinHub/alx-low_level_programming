#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: argument1
 * @argv: argument2
 * Return: number
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
