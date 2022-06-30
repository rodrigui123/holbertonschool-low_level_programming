#ifndef function_pointers
#define function_pointers
#include <stdio.h>
#include "function_pointers.h"
#endif

/**
 * print_name - function that prints a name
 * @f : pointers to a function 
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		(*f)(name);
}
