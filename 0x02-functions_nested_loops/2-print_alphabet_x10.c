#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry point
 *
 * Return: 0(success)
 */
int main(void)
{
	int rep = 1;
	while (rep <= 10)
	{
		char ch = 'a';
		while (ch <= 'z')
		{
			putchar(ch);
			++ch;
		}
		putchar('\n');
		++rep;
	}
	return (0);
}
