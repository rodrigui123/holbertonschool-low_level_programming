#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list b;
	unsigned int i;

	va_start(b, n)
	if (n != NULL)
	{
		for (i = 0; i < n; i++)
		{}
		if (separator != NULL)
		{
			printf("%s", separator);
		}
		if (n == NULL)
			printf("(nil)");
		printf("%s", va_arg(b, char);		
	}
	va_end(b);
	printf("\n");
}
