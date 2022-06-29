#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d : pointer to struct dog
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	printf("%s\n", d->name ? d->name : "nil");
	printf("%s\n", d->age);
	printf("%s\n", d->owner ? d->owner : "nil");
}
