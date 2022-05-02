#include <stdio.h>
/**
 * main - function main
 * @argc:argument count
 * @argv:argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int count = 0;

	(void) argv;
	for (i = 1; i < argc; i++)
	{
		count += 1;
	}
	printf("%d\n", count);
	return (0);
}
