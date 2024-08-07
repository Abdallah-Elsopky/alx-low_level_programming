#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Entry Point
 * @d: Structure pointer
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
