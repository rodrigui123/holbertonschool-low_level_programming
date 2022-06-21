#include <stdio.h>
#include <stdlib.h>
/**
* main -  entry point
* @argc : int
* @argv : an array of size argc
* Return: 0.
*/
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);

		printf("%d\n", (a * b));
	}

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
