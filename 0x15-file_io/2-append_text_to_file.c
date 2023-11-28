#include "main.h"
/**
 * append_text_to_file - creates a file.
 * @filename: the file name.
 * @text_content: text content.
 * Return: 0 or actual number of litters.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, len;
	ssize_t writebytes;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	len = strlen(text_content);
	writebytes = write(file_descriptor, text_content, len);
	close(file_descriptor);

	if (writebytes == -1)
		return (-1);

	return (1);
}
