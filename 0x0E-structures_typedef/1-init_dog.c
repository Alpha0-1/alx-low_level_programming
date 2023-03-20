#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initializes a struct dog with specific values.
 * @d: Pointer to the struct dog to be initialized.
 * @name: Pointer to the string representing the name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to the string representing the name of the owner of the dog.
 *
 * Return: None.
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
