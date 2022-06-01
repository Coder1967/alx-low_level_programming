#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stddef.h>
#include <unistd.h>
#include "main.h"
/**
 * create_file - function to create file
 * @filename: name of the file to be created
 * @text_content:content to be put in file
 * Return: 1 (on success)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, sz;

	fd = open(filename, O_WRONLY | O_CREAT | O_APPEND | O_TRUNC, 0600);
	if (filename == NULL)
		return (-1);
	if (fd == -1)
	return (-1);

	if (text_content == NULL)
	{
	close(fd);
	return (1);
	}
	sz = write(fd, text_content, strlen(text_content));
	if (sz == -1)
	{
	return (-1);
	close(fd);
	}
	return (1);
}
