#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format : the string which will contain everything
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	va_list b;
	int i = 0;
	char *j;

	va_start(b, format);
	if (format != 0)
	{
		while (format[i])
		{
			switch (format[i])
			{
			if (i >= 1)
				printf("%s", ", ");
				case 'c':
					printf("%c", va_arg(b, int));
					break;
				case 'i':
					printf("%d", va_arg(b, int));
					break;
				case 'f':
					printf("%f", va_arg(b, double));
					break;
				case 's':
					j = (va_arg(b, char *));
					(j == NULL ? printf("(nil)") : printf("%s", j));
					break;
			}
			i++;
		}
	}
	va_end(b);
	printf("\n");
}
