#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Deallocates memory for dog or free
 * @d: Pointer to the dog structure
 *
 * Return: no return
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

