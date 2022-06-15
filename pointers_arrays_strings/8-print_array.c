#include "main.h"
#include <stdio.h>
/**
 * print_array - print elements of an array of integers
 * @a : array
 * @n : last number of array
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int len;

	for (len = 0; len < n; len++)
	{
		if (len == n - 1)
		{
			printf("%d", a[len]);
		}
		else
			printf("%d, ", a[len]);
	}
	printf("\n");
}
