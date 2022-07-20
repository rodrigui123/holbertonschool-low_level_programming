#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename : name of file
 * @letters : size of text to read
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	fd = open(filename, O_RDONLY);
	if (!buf || fd == -1)
		return (0);
	count = read(fd, buf, letters);
	write(STDOUT_FILENO, buf, count);
	return (count);
}	
