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
		return (NULL);
	}
	if (d->name == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	if (d->owner == NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
		return (NULL);
	}
}
