#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return:Always 0(success)
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);

		ch--;
	}
	putchar('\n');
	return (0);
}

