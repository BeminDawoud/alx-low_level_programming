#include "main.h"
/**
 * main - copies a file to another file.
 * @argc: number of arguments.
 * @argv: argument string.
 * Return: .
 */

int main(int argc, char **argv)
{
	int fd_read, fd_write;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_read = open(argv[1], O_RDONLY);
	if (fd_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_write = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_write == -1)
	{
		close(fd_read);
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_read = read(fd_read, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_write, buffer, bytes_read);
		if (bytes_written == -1)
		{
			close(fd_read);
			close(fd_write);
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		close(fd_read);
		close(fd_write);
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fd_read) == -1 || close(fd_write) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_read);
		exit(100);
	}
	return (0);
}
