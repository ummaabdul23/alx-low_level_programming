#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
  * init_dog - initializes a dog data type
  * @d: points to a dog
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  *
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
