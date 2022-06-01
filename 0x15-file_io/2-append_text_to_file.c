#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include "main.h"
/**
 * append_text_to_file - function to append to a file
 * @filename: file to be appended to
 * @text_content - text to be appended to file
 * Return: 1(if successful) and (-1 if not)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1 || filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	write(fd, text_content, strlen(text_content) * sizeof(char));
	close(fd);
	return (1);
}
