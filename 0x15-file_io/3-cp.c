#include "main.h"
/**
 * main - copies a file to another file.
 * @argc: number of arguments.
 * @argv: argument string.
 * Return: .
 */
int main(int argc, char **argv)
{
	int fd_read, fd_write, len;
	ssize_t helper;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_read = open(argv[1], O_RDONLY);
	if (fd_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_write = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_write == -1)
	{
		close(fd_read);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	helper = read(fd_read, buffer, 1024);
	if (helper == -1)
	{
		close(fd_read);
		close(fd_write);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	len = strlen(buffer);
	helper = write(fd_read, buffer, len);
	if (helper == -1)
	{
		close(fd_read);
		close(fd_write);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	return (0);
}
