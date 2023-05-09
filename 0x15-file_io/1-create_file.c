#include "main.h"

/**
 * create_file - function to create a file
 * @filename: name of file to create
 * @text_content: content to be written to the file
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd_open, fd_write;

	if (filename == NULL)
		return (-1);

	/*create file*/
	fd_open = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	/*write content to file*/
	if (text_content != NULL)
	{
		fd_write = write(fd_open, text_content, sizeof(text_content));
	}

	if (fd_open == -1 || fd_write == -1)
		return (-1);

	close(fd_open);
	return (1);
}
