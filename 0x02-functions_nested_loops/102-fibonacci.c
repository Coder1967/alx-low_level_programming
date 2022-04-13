#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
void fibonacci(int n)
{
	int a = 1, b = 2, c, i;

	printf("%d %d ", a, b);
	for (i = 2; i < n; i++)
	{
		c = a + b;
		printf("%d", c);
		a = b;
		b = c;
		if ( c < 0)
		{
			c = -1 * c;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
}
int main()
{
	int n = 50;
	fibonacci(n);
	return 0;
}
