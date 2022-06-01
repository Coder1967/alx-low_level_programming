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
	int fd, sz, Sz;
	char *buf = malloc(sizeof(char) * letters);

	fd = open(filename, O_RDONLY);
	if ((filename == NULL) || (fd == -1) || (buf == NULL))
	{
		free(buf);
		return (0);
	}
	sz = read(fd, buf, letters);
	if (sz == -1)
		return (0);
	buf[sz] = '\0';
	Sz = write(1, buf, sz);
	if (Sz == -1)
		return (0);
	close(fd);
	return (Sz);
}

