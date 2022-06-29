#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the dogs
 * @d : pointer to dogs
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
