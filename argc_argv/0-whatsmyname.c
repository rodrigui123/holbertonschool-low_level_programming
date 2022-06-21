#include <stdio.h>
/**
* main -  entry poiny
* @argc : the number command line arguments  
* @argv : an array of size argc
* Return: 0.
*/
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
