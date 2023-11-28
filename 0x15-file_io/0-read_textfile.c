#include "main.h"
/**
 * read_textfile - reads a file and prints it.
 * @filename: the file name.
 * @letters: number of letters to print.
 * Return: 0 or actual number of litters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t readbytes, writebytes, len;
	char *buffer;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	readbytes = read(file_descriptor, buffer, letters);
	if (readbytes == -1)
	{
		free(buffer);
		return (0);
	}
	len = strlen(buffer);
	writebytes = write(STDOUT_FILENO, buffer, len);
	if (writebytes == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(file_descriptor);
	return (len);
}
