#include "dog.h"
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - function that frees dogs
 * @d: dog to be freed
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
