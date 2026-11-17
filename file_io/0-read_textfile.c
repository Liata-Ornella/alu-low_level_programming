
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * write_buffer - writes all bytes to a file descriptor
 * @fd: file descriptor
 * @buffer: buffer containing data
 * @length: number of bytes to write
 *
 * Return: number of bytes written, or -1 on failure.
 */
static ssize_t write_buffer(int fd, char *buffer, ssize_t length)
{
	ssize_t written, total;

	total = 0;
	while (total < length)
	{
		written = write(fd, buffer + total, length - total);
		if (written <= 0)
			return (-1);
		total += written;
	}
	return (total);
}

/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t r, w;

	if (filename == NULL || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	r = read(fd, buffer, letters);
	if (r <= 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	w = write_buffer(STDOUT_FILENO, buffer, r);
	free(buffer);
	close(fd);

	if (w == -1)
		return (0);

	return (w);
}
