#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function to return sum of parameters
 * @n: integer
 * Return: 0;
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	unsigned int sum = 0;


	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);

}

