#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - to free allocated memory for a struct dog
 * @d: to struct do to be free
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
