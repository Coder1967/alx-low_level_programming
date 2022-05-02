#include <stdio.h>
/**
 * main - calling function
 * @argc: argument counter
 * @argv: argument vector
 */
int main(int argc, char *argv[])
{
	int i = 0;
	while (i < argc)
	{
		puts(argv[i]);
		i++;
	}
	return (0);
}
