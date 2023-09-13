#include <stdio.h>

/**
 * main - fibonacci
 *
 * Return: yes
 */

int main(void)
{
	int a = 0;
	int b = 1;
	int c = 2;

	while (a < 50)
	{
		if (a == 0)
			printf("%d", b);
		else if (a == 1)
			printf("%d", c);
		else
		{
			c += b;
			b = c - b;
			printf("%d", c);
		}
		++a;
	}
	printf("\n");
	return (0);
}

