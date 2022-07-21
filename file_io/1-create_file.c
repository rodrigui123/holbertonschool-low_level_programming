#include "main.h"

/**
 * create_file - function that creates a file
 * @filename : name of file
 * @text_content : content of text in file
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)		
		write(fd, text_content, strlen(text_content));
	close(fd);
	return(1);
}
