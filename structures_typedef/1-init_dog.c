#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to struct dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: If d is NULL, the function does nothing.
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
