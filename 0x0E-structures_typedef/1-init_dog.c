#include "dog.h"

/**
  * init_dog - initializes a dog data type
  * @d: points to a dog
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  *
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
