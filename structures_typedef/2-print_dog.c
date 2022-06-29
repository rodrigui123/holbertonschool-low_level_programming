#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_dog(struct dog *d);
{
	if (d == NULL)
		return (nil);
	printf("%s\n", d->name ? d->name : "nil");
	printf("%s\n", d->age);
	printf("%s\n", d->owner ? d->owner : "nil");
}
