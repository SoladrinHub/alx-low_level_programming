
#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new type of struct
 * @name: first field
 * @age: second field
 * @owner: third field
 * Description: longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
