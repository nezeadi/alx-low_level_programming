#include "main.h"

/**
 * checkArgc - check number of args
 * @no_of_args: number of arguments pased
 */
void checkArgc(int no_of_args)
{
	if (no_of_args != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(100);
	}
}

/**
 * closeFile - function that closes a file
 * @f_desc: file descriptor
 */
void closeFile(int f_desc)
{
	int fd_close;

	fd_close = close(f_desc);
	if (fd_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_close);
		exit(100);
	}
}

/**
 * main - execute file copying
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *file_to, *file_from, text_buffer[1024];
	int ft_desc, ff_desc, _read, _write;

	file_from = argv[1];
	file_to = argv[2];
	checkArgc(argc);
	/*open file_from (doesn't exist/cannot be read - print error and exit)*/
	ff_desc = open(file_from, O_RDONLY);
	if (ff_desc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(99);
	}
	/*open file_to (if it exists truncate)*/
	ft_desc = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (ft_desc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", file_to);
		exit(99);
	}
	/*read from file_from ()*/
	while ((_read = read(ff_desc, text_buffer, 1024)) > 0)
	{
		_write = write(ft_desc, text_buffer, _read);
		if (_write == -1 || _write != _read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s", file_to);
			exit(99);
		}
	}
	if (_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	closeFile(ff_desc);
	closeFile(ft_desc);
	return (0);
}
