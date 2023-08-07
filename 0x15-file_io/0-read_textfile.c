#include "main.h"

/**
 * read_textfile - Read a text file and print to POSIX standard output.
 * @filename: Name of the file to read.
 * @letters: Number of letters to read and print.
 * Return: Number of letters read and printed.
 */

ssize_t	read_textfile(const char *filename, size_t letters)
{
	int		fd;
	ssize_t	i;
	char	*buffer;
	ssize_t	byte_w;

	i = 0;
	fd = 0;
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buffer = malloc(sizeof(char) * (letters + 1));
	if (!buffer)
		return (0);
	i = read(fd, buffer, letters);
	if (i < -1)
	{
		return (0);
	}
	buffer[letters] = '\0';
	byte_w = write(1, buffer, i);
	if (byte_w < -1 || byte_w != i)
	{
		return (0);
	}
	free(buffer);
	close(fd);
	return (i);
}
