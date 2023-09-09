#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	y = n % 10;
	if (y > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, y);
	else if (y == 0)
		printf("last digit of %d is %d and is zero\n", n, y);
	else if (y < 6 && y != 0)
		printf("last digit of %d is %d and is less tahn 6 and not zero\n", n, y);
	return (0);
}
