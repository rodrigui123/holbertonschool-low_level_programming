#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		free(d);
	}
	if (d->name == NULL)
	{
		free(d->name);
		free(d);
	}
	if (d->owner == NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
