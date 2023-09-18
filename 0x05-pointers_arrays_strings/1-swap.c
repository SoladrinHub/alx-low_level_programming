#include "main.h"
/**
 * swap_int - swap two integers
 * @a: swap integer
 * @b: swap integer
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
