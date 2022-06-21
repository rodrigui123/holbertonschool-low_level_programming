#include <stdio.h>
/**
* main -  entry point
* @argc : 
* @argv : an array of size argc
* Return: 0.
*/
int main(int argc, char *argv[])
{
	int a = atoi(argv[1];
	int b = atoi(argv[2];

	if (argc == 3)
	{
		int a = atoi(argv[1];
		int b = atoi(argv[2];
		printf("%d\n", (argv[1] * argv[2]));
	}

	if (argc != 3)
	{
		printf("%s\n, Error");
		return (1);
	}
}
