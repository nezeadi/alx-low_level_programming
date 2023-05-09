#include "main.h"

/**
 * read_textfile - function to read and print a textfile
 * @filename: name/filepath
 * @letters: number of letters function should read and print
 * Return: no of letters it read and printed or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, _read, _write;
	char *text_buffer;

	/*open file*/
	fd = open(filename, O_RDWR);
	if (filename == NULL || fd == -1)
	{
		return (0);
	}

	/*allocate space for storing data read from file*/
	text_buffer = malloc(letters);
	if (text_buffer == NULL)
	{
		return (0);
	}

	/*read from file*/
	_read = read(fd, text_buffer, letters);
	if (_read == -1)
	{
		return (0);
	}

	/*display/print files*/
	_write = write(STDOUT_FILENO, text_buffer, _read);
	if (_write == -1)
	{
		return (0);
	}
	close(fd);
	free(text_buffer);
	return (_read);
}
