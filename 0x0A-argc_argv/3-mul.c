#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - function
 * @argc: argument counter
 * @agrv: argument vector
 * Return:0
 */
int main(int argc, char* argv[])
{
	int mul = 1;
	int i;

	if (argc > 2 && argc < 4)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		puts("Error");
	}
	return (0);
}
