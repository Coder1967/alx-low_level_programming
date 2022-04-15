#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a %5 == 0)
		{
			printf("FizzBuzz\t");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz\t");
		}
		else if (a % 5 == 0)
		{
			puts("Buzz\t");
		}
		else
		{
			printf("%d\t", a);
		}
	}
	printf("\n");

	return (0);
}

	
