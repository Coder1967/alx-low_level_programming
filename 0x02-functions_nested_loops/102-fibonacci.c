#include <stdio.h>
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
		if ( c == -1109825406)
		{
			continue;
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
