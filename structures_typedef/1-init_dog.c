#include <stdio.h>
#include "dog.h"

/**
 * init_dog - init dog
 * @d: puntero
 * @age: edad
 * @name: parametro, variable temporal a string
 * @owner: lo mismo que name
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
