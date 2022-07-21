#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename : name of file
 * @text_content : content of text in file
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
		write(fd, text_content, strlen(text_content));
	close(fd);
	return (1);
}
