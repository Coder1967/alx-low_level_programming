#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - entry block
 *@void: no argument
 * Return: 0
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
