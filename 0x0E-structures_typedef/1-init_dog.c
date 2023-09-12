#include <stdio.h>
#include "dog.h"

/**
 * init_dog - func intialize struct
 * @d: instance pointer
 * @name: member name
 * @age: age
 * @owner: owe
 *
 * Return: no return
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
