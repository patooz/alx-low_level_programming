#include "dog.h"

/**
 * free_dog - frees dog
 * @d: pointer to dog_t
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		freee(d->owner);
		free(d);
	}
}
