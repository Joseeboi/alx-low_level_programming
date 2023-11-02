#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

/**
 * main - check the code for holberton school student
 * @argc: number of arguments
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int source_fd, dest_fd;
	ssize_t bytes_read;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	source_fd = open(argv[1], O_RDONLY);
	if (source_fd == -1 || dup2(source_fd, 0) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		return (98);
	}
	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (dest_fd == -1 || dup2(dest_fd, 1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to file %s\n", argv[2]);
		return (99);
	}

	while ((bytes_read = read(0, buffer, sizeof(buffer)) > 0))
	{
		if (write(1, buffer, bytes_read) != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: can't write to file %s\n", argv[2]);
			return (99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		return (98);
	}
	return (0);
}
