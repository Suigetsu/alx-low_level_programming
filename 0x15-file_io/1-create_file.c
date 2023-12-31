#include "main.h"

/**
 * create_file - Create a file with specified permissions.
 * @filename: Name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */

int	create_file(const char *filename, char *text_content)
{
	int	fd;
	int w;

	w = 0;
	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		w = dprintf(fd, "%s", text_content);
		if (w < 0)
			return (-1);
	}
	close(fd);
	return (1);
}
