
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * close_file - closes a file descriptor
 * @fd: file descriptor to close
 *
 * Return: Nothing.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_content - copies data between two file descriptors
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 *
 * Return: 0 on success, -1 on write failure, -2 on read failure.
 */
int copy_content(int fd_from, int fd_to)
{
	char buffer[1024];
	ssize_t r, w;
	size_t total;

	while ((r = read(fd_from, buffer, 1024)) > 0)
	{
		total = 0;
		while (total < (size_t)r)
		{
			w = write(fd_to, buffer + total, r - total);
			if (w <= 0)
				return (-1);
			total += w;
		}
	}
	if (r == -1)
		return (-2);
	return (0);
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0 on success, error code otherwise.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, result;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_file(fd_from);
		exit(99);
	}
	result = copy_content(fd_from, fd_to);
	if (result != 0)
	{
		if (result == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		else
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]);
		close_file(fd_from);
		close_file(fd_to);
		exit(result == -1 ? 99 : 98);
	}
	close_file(fd_from);
	close_file(fd_to);
	return (0);
}
