#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
#include <stdio.h>
/**
 * main - contains the function
 *
 * Return: return 0
 */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes there */
		if (n > 0)
			printf("%d is a positive number", n);
		else if (n == 0)
			printf("%d is zero", n);
		else
			printf("%d is a negative number", n);
		printf("\n");
		return (0);
}
