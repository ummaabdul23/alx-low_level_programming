#include "main.h"

/**
 * create_file - Create a file and write text content to it
 * @filename: Name of the file to be created
 * @text_content: Text to write inside the file
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd_open, fd_write;

	if (filename == NULL)
		return (-1);
	fd_open = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd_open == -1)
		return (-1);

	if (text_content != NULL)
	{
		fd_write = write(fd_open, text_content, _strlen(text_content));
		if (fd_write == -1)
		{
			close(fd_open);
			return (-1);
		}
	}
	close(fd_open);
	return (1);
}
/**
  * _strlen - calculate the lenght of a string.
  * @str: array of characters.
  *
  * Return: lenght of the string.
  */
int _strlen(char *str)
{
	int count = 0;

         while (*str++)
                 count++;
         return (count);
}

