#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file to append to.
 * @text_content: The text to add to the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, result;
	size_t text_len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	while (text_content[text_len] != '\0')
	{
		text_len++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	result = write(fd, text_content, text_len);
	if (result == -1 || (size_t)result != text_len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
