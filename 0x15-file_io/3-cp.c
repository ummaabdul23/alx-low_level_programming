#include "main.h"
/**
 * main - Entry point for the program
 * @argc: Number of arguments passed to the function.
 * @argv: Array of strings containing the program
 * name and two file paths.
 *
 * Return: 0 on success, other values on error.
 */
int main(int argc, char *argv[])
{
	int inputFD, outputFD;
	ssize_t nBytes_read, nBytes_write;
	char buffer[BUF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	return (97);
	inputFD = open(argv[1], O_RDONLY);
	if (inputFD == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	return (98);
	outputFD = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (outputFD == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	return (99);
	while ((nBytes_read = read(inputFD, buffer, BUF_SIZE)) > 0)
	{
		nBytes_write = write(outputFD, buffer, nBytes_read);
		if (nBytes_write == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		return (99);
	}
	if (nBytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	close_file(inputFD);
	close_file(outputFD);

	return (0);
}
/**
 * close_file - Close an opened file descriptor.
 * @FD: File descriptor to close.
 *
 * Return: Nothing.
 */
void close_file(int FD)
{
	if (close(FD) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", FD);
		exit(100);
	}
}

