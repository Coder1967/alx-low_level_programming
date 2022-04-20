#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts2 - function to print out string
 * @str: variable to store string
 * Return: the result
 */
void puts2(char *str)
{
	printf("%c", str[0]);
	int i;

	for (i = 0; i <= strlen(str) - 1; i++)
	{
		printf("%d", str[i + 2]);
	}
}
