#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "main.h"

/**
 * open_file - Open a file and handle errors.
 *
 * @filename: The name of the file to open.
 * @flags: The flags for opening the file like O_RDONLY, O_WRONLY
 * @mode: The file mode (permissions) for creating a new file.
 * @error_code: The exit code in case of an error.
 *
 * Returns: The file descriptor if successful,
 * or exits with the specified error code on failure.
 */

int open_file(const char *filename, int flags, int mode, int error_code)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
	{
		dprintf(2, "Error: Can't open file %s\n", filename);
		exit(error_code);
	}
	return (fd);
}

/**
 * copy_file - Copy data from one file to another.
 *
 * @from_fd: The source file descriptor.
 * @to_fd: The destination file descriptor.
 */

void copy_file(int from_fd, int to_fd)
{
	char buffer[1024];
	ssize_t read_result, write_result;

	while ((read_result = read(from_fd, buffer, sizeof(buffer))) > 0)
	{
		write_result = write(to_fd, buffer, read_result);
		if (write_result == -1 || write_result != read_result)
		{
			dprintf(2, "Error: Can't write to the destination file\n");
			close(from_fd);
			close(to_fd);
			exit(99);
		}
	}
	if (read_result == -1)
	{
		dprintf(2, "Error: Can't read from the source file\n");
		close(from_fd);
		close(to_fd);
		exit(98);
	}
}

/**
 * main - Entry point for the file copying program.
 *
 * @ac: The number of arguments.
 * @av: The array of arguments.
 *
 * Return: 0 on success, or the appropriate exit code on failure.
 */

int main(int ac, char **av)
{
	int pt_fd, fr_fd;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s source_file destination_file\n", av[0]);
		exit(97);
	}
	pt_fd = open_file(av[1], O_RDONLY, 0, 98);
	fr_fd = open_file(av[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH, 99);
	copy_file(pt_fd, fr_fd);

	if (close(pt_fd) == -1)
	{
		dprintf(2, "Error: Can't close the source file\n");
		exit(100);
	}
	if (close(fr_fd) == -1)
	{
		dprintf(2, "Error: Can't close the destination file\n");
		exit(100);
	}
	return (0);
}
