#include"dog.h"
#include<stdlib.h>
/**
 * free_dog - frees dogs
 * @d: frees struct dogs
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
