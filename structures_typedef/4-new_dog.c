#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - create a new dog struct
 * @name : component of new dog structure
 * @age : component of new dog structure
 * @owner : component of new dog structure
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *tobias;
	int i, lenn, leno;

	lenn = strlen(name);
	leno = strlen(owner);
	tobias = malloc(sizeof(dog_t));
	if (tobias == NULL)
	{
		free(tobias);
		return (NULL);
	}
	tobias->name = malloc(lenn + 1);
	if (tobias->name == NULL)
	{
		free(tobias->name);
		free(tobias);
		return (NULL);
	}
	tobias->owner = malloc(leno + 1);
	if (tobias->owner == NULL)
	{
		free(tobias->owner);
		free(tobias->name);
		free(tobias);
		return (NULL);
	}
	for (i = 0; i < lenn; i++)
		tobias->name[i] = name[i];
	tobias->name[i] = '\0';
	for (i = 0; i < leno; i++)
		tobias->owner[i] = owner[i];
	tobias->owner[i] = '\0';
	tobias->age = age;
	return (tobias);
}
