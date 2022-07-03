#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator : separator between numbers
 * @n : number of integers passed to print
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list b;
	unsigned int i;
	char *j;

	va_start(b, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i >= 1 && separator != NULL)
			{
				printf("%s", separator);
			}
			j = va_arg(b, char *);
			if (j == NULL)
				printf("(nil)");
			else
				printf("%s", j);
		}
	}
	va_end(b);
	printf("\n");
}
