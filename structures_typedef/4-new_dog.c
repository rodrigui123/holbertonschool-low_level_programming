#include <stdio.h>
#include "dog.h"

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
	owner = malloc(leno + 1);
	if (tobias->owner == NULL)
	{
		free(tobias->name);
		free(tobias->owner);
		free(tobias);
		return (NULL);
	}
	for (i = 0; i < lenn; i++)
		tobias->name[i] = name[i]
	tobias->name = '\0';
	for (i = 0; i < leno; i++)
		tobias->owner[i] = owner[i]
	tobias->owner = '\0';
	tobias->age = age;
}	
