#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64 || *n == '\0')
		return (-1);
	















if (index > 64 || *n == '\0')
		return (-1);
	*n = *n | 1 << index;
	return (1);
