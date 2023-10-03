#include "main.h"

/**
  * read_textfile - Write a function that reads a text file and prints it
  * to the POSIX standard output.
  * @filename: Name of file descriptor.
  * @letters: the number of letters it should read and print
  * Returns: the actual number of letters it could read and print, if the
  * file can not be opened or read, return 0, if filename is NULL return 0.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t buf_wrt;
	ssize_t _read;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);

	_read = read(fd, buffer, letters);

	buf_wrt = write(STDOUT_FILENO, buffer, _read);

	free(buffer);

	close(fd);

	return (buf_wrt);
}
