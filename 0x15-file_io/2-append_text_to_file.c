#include "main.h"

/**
 * append_text_to_file - function to append text to end of a file
 * @filename: name of file to create
 * @text_content: content to be written to the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd_open, fd_write;

	if (filename == NULL)
		return (-1);

	/*create file*/
	fd_open = open(filename, O_RDWR | O_APPEND);

	/*write content to file*/
	if (text_content != NULL)
	{
		fd_write = write(fd_open, text_content, strlen(text_content));
	}

	if (fd_open == -1 || fd_write == -1)
		return (-1);
	close(fd_open);
	return (1);
}
