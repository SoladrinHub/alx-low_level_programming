#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_all - function to print anything
 * @format: list of types of arguments
 * Return: anything
 */

void print_all(const char * const format, ...)
{
	int i;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;

				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;

				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;

				case 's':
					str = va_arg(list, char *);
					if(!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;

				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;

		}
	}

	printf("\n");
	va_end(list);
}

