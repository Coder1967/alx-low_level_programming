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
		ssize_t sz;
		int fd;
		char *buf = malloc((letters) + 1);

		fd = open(filename, O_RDONLY);
		if (fd == -1)
		{
			free(buf);
			return (0);
		}
		sz = read(fd, buf, letters);
		buf[letters] = '\0';
		close(fd);
		if (strlen(buf) != letters)
		{
			free(buf);
			return (0);
		}
		write(1, buf, sizeof(buf));
		return (sz);
		free(buf);
	}
	return (0);
}

