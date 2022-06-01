#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stddef.h>
#include <string.h>
/**
 * read_textfile - function to read from a file and print it to
 * standard output
 * @filename: name of file to be read
 * @letters: amount of letters in file
 * Return: amount of numbers read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename != NULL)
	{
		ssize_t sz, sz1;
		int fd;
		char *buf = malloc((letters) + 1);

		fd = open(filename, O_RDONLY);
		if (buf == NULL)
		{
			free(buf);
			return (0);
		}
		if (fd == -1)
		{
			free(buf);
			return (0);
		}
		sz = read(fd, buf, letters);
		buf[sz] = '\0';
		if (sz == -1)
			return (0);
		if (strlen(buf) != letters)
		{
			free(buf);
			return (0);
		}
		sz1 = write(1, buf, sizeof(buf));
		close(fd);
		return (sz1);
		free(buf);
	}
	return (0);
}

