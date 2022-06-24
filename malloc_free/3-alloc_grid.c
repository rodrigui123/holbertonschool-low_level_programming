#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int **ar, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ar = malloc(height * sizeof(int *));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));
		if (ar[i] == NULL)
		{
			for (j = 0; j < height; j++)
			{
				free(ar[j]);
			}
				free(ar);
				return (NULL);
			for (j = 0; j < width; j++)
			{
				ar[i][j] = 0;
			}
		}
	}
	ar[i] = '\0';
	return (ar);
}
