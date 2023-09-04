include "main.h"

/**
 * read_textfile - reads a text file and prints to the STDOUT
 * @filename: name of the file to be read
 * @letters: maximum number of letters to be read and printed
 *
 * Return: actual number of letters it could read and print
 * if filename is NULL return 0
 * if write fails return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_read, bytes_written;
	char buf[BUF_SIZE];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bytes_read = read(fd, buf, letters);
	if (bytes_read == -1)
	close(fd);
		return (0);

	bytes_written = write(STDOUT_FILENO, buf, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	close(fd);
		return (0);

	close(fd);
	return (bytes_written);
}
