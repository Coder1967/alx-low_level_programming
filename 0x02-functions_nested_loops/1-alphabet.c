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
	char firstAlpha = 'a';

	print_alphabet(firstAlpha);
	while (firstAlpha <= 'z')
	{
		putchar(firstAlpha);

			++firstAlpha;
	}

	putchar('\n');

	return (0);
}

void print_alphabet(char ch)
{



	return;
}
