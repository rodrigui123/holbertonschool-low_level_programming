#include "main.h"
#include <stdio.h>

/**
 * reverse_array - prints the string in reverse
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;

	j = n - 1;
	for (i = 0; i < n / 2; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
