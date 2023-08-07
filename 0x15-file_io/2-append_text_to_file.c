#include "main.h"

/**
 * append_text_to_file - Append text to the end of a file.
 * @filename: Name of the file to append to.
 * @text_content: NULL terminated string to add at the end.
 * Return: 1 on success, -1 on failure.
 */

int	append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int w;
	int slen;

	slen = 0;
	w = 0;
	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[slen])
			slen++;
		w = write(fd, text_content, slen);
		if (w < 0 || slen != w)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
