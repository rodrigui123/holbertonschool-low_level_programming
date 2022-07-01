#include "variadic_functions.h"

/**
 *sum_them_all - unction that returns the sum of all its parameters
 * @n : number of parameters
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i; 
	int add = 0;
	va_list b;

	va_start(b, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			add += (b, int);
		}
	va_end(b);
	return (add);
}
