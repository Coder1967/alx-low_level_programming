#include <unistd.h>
#include <fcntl.h> 
#include <sys/stat.h>
#include <sys/types.h> 
#include <stdlib.h> 
#include <string.h>
#include <stdio.h>
/**
 * main - function to copy one file's content to another
 * @argc: argument counter variable
 * @argv: argument vector variable
 * Return: 0(on success)
 */
int main(int argc, char *argv[])
{
	int fd, sd, cd, rd;
	char buf[1024];

	if (argc != 3)
	{
		write(2, "Usage: cp file_from file_to\n", 29);
		exit(97);
	}
	fd = open(argv[1], O_RDONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	rd = read(fd, buf, 1024);
	close(fd);
	fd = open(argv[2], O_CREAT | O_WRONLY, 0644);
	sd = write(fd, buf, rd);
	if (fd == -1 || sd == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	cd = close(fd);

	if (cd == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (0);
}
