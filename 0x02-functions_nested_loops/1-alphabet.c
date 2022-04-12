#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{

	print_alphabet();

	return (0);
}

void print_alphabet()
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);

		++ch;
	}
	putchar('\n');
	return;
}
