#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * void - Entry point
 *
 * Return: Always 0(success)
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);

		++ch;
	}

	putchar('\n');


}
