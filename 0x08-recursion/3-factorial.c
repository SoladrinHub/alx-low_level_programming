#include "main.h"

/**
 * factorial - returns the factorial os integer
 * @n: integer
 * Return: returns factorial value
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
