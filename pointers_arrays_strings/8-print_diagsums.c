#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 * @a : string
 * @size : size of the matrix
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i;

	for (i = 0; a[i]; i++, size++)
	{
		if (a[i]
