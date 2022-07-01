#include <stddef.h>
#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
* main - function
* @argc : characters of argument by user
* @argv : position inside the argument
* Return: 0.
**/
int main(int argc, char *argv[])
{
	int j, p;
	int (*r)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	j = atoi(argv[1]);
	p = atoi(argv[3]);
	r = get_op_func(argv[2]);
	if (r == NULL || (argv[2][1]) != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", r(j, p));
	return (0);
}
