#include "main.h"
/**
  * read_textfile - Write a function that reads a text file and prints it
  * to the POSIX standard output.
  * @filename: Path to file / Name of file
  * @letters: letters is the number of letters it should read and print.
  *
  * Return:  the actual number of letters it could read and print,
  * if the file can not be opened or read, return 0, if filename is NULL
  * return 0, if write fails or does not write the expected amount of
  * bytes, return 0
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	int _read;
	ssize_t _write;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	_read = read(fd, buffer, letters);
	if (_read == -1)
	{
		free(buffer);
		return (0);
	}

	_write = write(STDOUT_FILENO, buffer, letters);
	if (_write == -1)
	{
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);
	return (_read);
}
