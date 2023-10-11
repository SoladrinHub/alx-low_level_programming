#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print dog
 * @d: print
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %.2f\n", d->age);
		printf("Owner : %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
