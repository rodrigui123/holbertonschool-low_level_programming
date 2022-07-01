#include <stddef.h>
#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
* main - function
**/
int main(int argc, char *argv[])
{
	int (*r)(int, int);
	int j, p;

	j = atoi(argv[1]);
	p = atoi(argv[3]);
	r = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (r == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", r(j, p));
	return (0);
}
