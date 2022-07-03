#include "variadic_functions.h"

/**
 * main - check the code
 *
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
		while (i != '\0')
		{
			i++;
			switch(i)
			{
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
					if (j == NULL)
						printf("(nil)");
						else
							printf("%s", j);
					break;
			}
		}
	}
	va_end(b);
	printf("\n");
} 
