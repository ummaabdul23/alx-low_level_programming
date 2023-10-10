#ifndef DOG_H
#define DOG_H

/**
 * struct dog - define Dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: tell about a Dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - a typedef for dog
 */

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
