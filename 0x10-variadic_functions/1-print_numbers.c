#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *  print_numbers - function to print numbers
 *  @separator: string to be printed between numbers
 *  @n: number of integers
 *  Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		printf("%d", num);

		if (i < n - 1)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(args);
	printf("\n");
}
