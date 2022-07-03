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
					if (char * == NULL)
						printf("(nil)");
						else
							printf("%s", va_arg(b, char *));
					break;
			}
		}
	}
	va_end(b);
	printf("\n");
} 
