#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: 0
 */
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);

		++ch;
	}

	putchar('\n');


}
