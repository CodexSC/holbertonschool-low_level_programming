#include <stdlib.h>
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
	int i;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	i = 0;
	while (name[i])
		i++;
	d->name = malloc(i + 1);
	if (d->name == NULL)
		return (NULL);
	i = 0;
	while (name[i])
	{
		d->name[i] = name[i];
		i++;
	}
	d->name[i] = '\0';
	i = 0;
	while (owner[i])
		i++;
	d->owner = malloc(i + 1);
	if (d->owner == NULL)
		return (NULL);
	i = 0;
	while (owner[i])
	{
		d->owner[i] = owner[i];
		i++;
	}
	d->owner[i] = '\0';
	d->age = age;
	return (d);
}
