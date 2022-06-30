#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @f : pointers to a function
 * @name : pointer to a function
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		(*f)(name);
}
