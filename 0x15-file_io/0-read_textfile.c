#include "main.h"

/**
 * read_textfile - Read the contents of a text file and
 * print them to the standard output.
 * @filename: The name of the file to be opened and read
 * @letters: The maximum number of letters to be
 * printed to the standard output
 *
 * Return: The number of letters printed or 0 in case of an error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd_open, fd_read, fd_write;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd_open = open(filename, O_RDONLY);
	if (fd_open == -1)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd_open);
		return (0);
	}
	fd_read = read(fd_open, buffer, letters);
	if (fd_read == -1)
	{
		free(buffer);
		close(fd_open);
		return (0);
	}
	fd_write = write(STDOUT_FILENO, buffer, fd_read);
	if (fd_write == -1 || fd_read != fd_write)
	{
		free(buffer);
		close(fd_open);
		return (0);
	}
	free(buffer);
	close(fd_open);
	return (fd_write);
}

