#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog.
 * @d: pointer to type struct dog
 * @name: struct dog's member, name (char *)
 * @age: struct dog's member, age (float)
 * @owner: truct dog's member, owner (char *)
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
