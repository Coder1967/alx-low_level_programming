#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return:Always 0(sucess)
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9')
	{
		putchar(num);
		if (num < '9')
		{
			putchar(',')
		}
		else
		{
			continue;
		}
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
