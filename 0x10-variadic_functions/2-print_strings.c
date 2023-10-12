#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - function to print strings
 * @separator: string to be printed
 * @n: number of strings
 * Return 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		const char *str = va_arg(args, const char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

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



