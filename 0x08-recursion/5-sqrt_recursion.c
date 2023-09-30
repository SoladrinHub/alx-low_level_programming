#include "main.h"


/**
 * check_sqrt_recursion - returns the natural square root of a number
 * @n: calculate the the square root of this number
 * @i: iterator
 * Return: the resulting square root
 */

int check_sqrt_recursion(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (check_sqrt_recursion(n, i + 1));

/**
 * _sqrt_recursion - find the squareroot of the number
 * @n: calculate the square root
 * Return: the squareroot
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (check_sqrt_recursion(n, 1));
}
