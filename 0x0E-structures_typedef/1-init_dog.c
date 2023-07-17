#include <stdlib.h>
#include "dog.h"
/**
* init_dog - gets string length
* @d: struct dog
* @name: name of dog
* @age: age of dog
* @owner: owner's nam
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
