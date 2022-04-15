#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int a;
	int b;

	for (a = 1; a <= 4; a++)
	{
		for (b = 1; b <= 100; b++)
		{
			if ( b % 3 == 0 && b % 5 == 0)
			{
				printf("FizzBuzz ");
			}
			else if (b % 3 == 0)
			{
				printf("Fizz ");
			}
			else if (b % 5 == 0)
			{
				printf("Buzz ");
			}
			else
			{
				printf("%d ", b);
			}
		}
		printf("\n");
	}
	printf("\n");
}
				
