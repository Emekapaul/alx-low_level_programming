#include "main.h"
#include <string.h>

/**
  * append_text_to_file - Write a function that appends text at the end of
  * a file.
  * @filename: the name of the file
  * @text_content: the NULL terminated string to add at the end of the file
  *
  * Return: Return: 1 on success and -1 on failure, If filename is NULL
  * return -1, If text_content is NULL, do not add anything to the file.
  * Return 1 if the file exists and -1 if the file does not exist or
  * if you do not have the required permissions to write the file
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	ssize_t _write;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		len = strlen(text_content);
		_write = write(fd, text_content, len);
		if (_write == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
