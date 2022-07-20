#include "main.h"

/**
 * create_file - function that creates a file
 * @filename : name of file
 * @text_content : content of text in file
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, count = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (text_content && text_content[count])
		count++;
	write(fd, text_content, count);
	close(fd);
	return(1);
}
