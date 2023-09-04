#include "main.h"
#include <string.h>

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: pointer to the string we want to write
 *
 * Return: 1 on success | -1 0n failure
 * if filename is NULL return -1
 * if text_content is NULL create an empty file and give rw-------
 */

int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written = 0;

	if (filename == NULL)

	return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	return (-1);

	if (text_content != NULL)
	while (*text_content != '\0')
	bytes_written = write(fd, text_content, 1);
	if (bytes_written == -1)
	close(fd);
	return (-1);
	text_content++

	close(fd);
	return (1);
}
