#include "main.h"
/**
* @argc : array count 
* @argv : content of array
* return: 97 / 98 / 99
**/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	copy_text(argv[1], argv[2]);
	exit(0);
}
/**
* copy_txt - function that copies from one file to another
* @from : this file
* @to : this file
**/
void copy_txt(const char *from, const char *to)
{
	int file_from, file_to, readme = 1024, writeme;
	char *Count[1024];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_TROTH;

	file_from = open(from, 0_RDONLY);
	if (file_from != -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from), exit(98);
	file_to = open(to, O_CREAT | O_TRUNC | O_WRONLY, mode);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write %s\n", from), exi
    t(99);
	readme = read(file_from, count, 1024);
	if (readme == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from), exit(98);
	writeme = write(file_to, count, readme);
	if (writeme == -1)
		dprintf(STDERR_FILENO, "Error: Can't write %s\n", from), exit(99);
	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
}
