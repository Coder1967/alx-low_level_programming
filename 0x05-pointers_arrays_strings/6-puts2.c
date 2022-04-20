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
	int j;
	int u;

	printf("%c", str[0]);

	j = strlen(str) - 1;

	for (u = 0; u <= j; u++)
	{
		printf("%c", str[(u)]);
	}
}
