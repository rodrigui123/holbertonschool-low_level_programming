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

	va_start(b, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			if (n == '\0')
				printf("(nil)");
			if (separator != NULL)
			{
				printf("%s", separator);
			}
			printf("%d", n);
		}
	}
	va_end(b);
	printf("\n");
}
