#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to new dog_t, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc((strlen(name) + 1) * sizeof(char));
	if (d->name == NULL)
		return (NULL);
	strcpy(d->name, name);
	d->owner = malloc((strlen(owner) + 1) * sizeof(char));
	if (d->owner == NULL)
		return (NULL);
	strcpy(d->owner, owner);
	d->age = age;
	return (d);
}
