#ifndef function_pointers.h
#define function_pointers.h
#include <stdio.h>
#include "function_pointers.h"

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
#endif
}
