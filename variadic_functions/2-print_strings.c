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
	char *j;

	va_start(b, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
			j = va_arg(b, char *);
			if (j == NULL)
				printf("(nil)");
			printf("%s", va_arg(b, char *));
		}
	}
	va_end(b);
	printf("\n");
}
