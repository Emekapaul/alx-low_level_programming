#include "main.h"

/**
  * create_file - Create a function that creates a file.
  * @filename: he name of the file to create.
  * @text_content: is a NULL terminated string to write to the file.
  *
  * Return: Returns: 1 on success, -1 on failure (file can not be created,
  * file can not be written, write “fails”, etc…),
  * if filename is NULL return -1.
  */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	ssize_t _write;

	for (len = 0; text_content[len] != '\0'; len++)
	{
	}
	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	_write = write(fd, text_content, len);

	if (_write == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
