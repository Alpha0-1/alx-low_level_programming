#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing a dog.
 * @name: Pointer to a string which represents the dog's name.
 * @age: float datatype representing the dog's age.
 * @owner: Pointer to a string representing dog's owner's name.
 * Description: The structure represents a dog and contains information
 * about the dog's name, age, and owner's name.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
