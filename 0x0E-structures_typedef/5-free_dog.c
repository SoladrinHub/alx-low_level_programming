#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated for a struct dog
 * @d: struct dog
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
