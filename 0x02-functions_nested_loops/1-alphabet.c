#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	char cha = 'a';

	while (cha <= 'z')
	{
		putchar(cha);
		++cha;
	}
	return (0);
}
