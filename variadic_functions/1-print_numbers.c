#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator : separator between numbers
 * @n : number of integers passed to print
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
			if (i >= 1 && separator != NULL)
			{
				printf("%s", separator);
			}
			printf("%d", va_arg(b, int));
		}
	}
	va_end(b);
	printf("\n");
}
