
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - creates a file and writes text content into it
 * @filename: name of the file to create
 * @text_content: text to write into the file
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len, total;
	ssize_t written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		len = 0;
	else
	{
		len = 0;
		while (text_content[len] != '\0')
			len++;
	}

	total = 0;
	while (total < len)
	{
		written = write(fd, text_content + total, len - total);
		if (written <= 0)
		{
			close(fd);
			return (-1);
		}
		total += written;
	}

	if (close(fd) == -1)
		return (-1);

	return (1);
}
