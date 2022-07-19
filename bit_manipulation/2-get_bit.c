#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n : number
 * @index : index
 * Return: the rest of the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	n = n >> index;
	return (n % 2);
}
