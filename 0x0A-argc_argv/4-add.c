#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;
	int total = 0;
	int error = 0;
	int n;

	for (i = 1; i < argc; i++)
	{
		n = atoi(argv[i]);
		if (n > 0 && n < 50000)
		{
			total += n;
		}
		else
		{
			error += 1;
		}
	}
	if (error > 0)
	{
		puts("Error");
		return (1);
	}
	else
	{
		printf("%d\n", total);
	}
	return (0);
}
