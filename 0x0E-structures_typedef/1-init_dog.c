#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize a variable struct dog
 * @d: pointer
 * @name: field1
 * @age: field2
 * @owner: field3
 * Description: the function will initialize a variable
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
