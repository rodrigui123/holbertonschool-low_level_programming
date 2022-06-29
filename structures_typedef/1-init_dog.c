#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (0);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}		   
