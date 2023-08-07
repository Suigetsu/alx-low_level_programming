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
	int		i;
	char	*buffer;

	i = 0;
	fd = 0;
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd <= 0)
		return (0);
	buffer = malloc(sizeof(char) * (letters + 1));
	if (read(fd, buffer, letters) <= 0)
	{
		free(buffer);
		return (0);
	}
	buffer[letters] = '\0';
	if (write(1, buffer, letters) < 0)
	{
		free(buffer);
		return (0);
	}
	while (buffer[i])
		i++;
	free(buffer);
	return (i);
}
