#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list b;
	unsigned int i;
	
	va_start(b, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i >= 1)
			{
				printf("%d", ", ");
			}
			printf("%d", va_arg(b, int);
		}
	}
	va_end(b);
	printf("%d\n");
}
