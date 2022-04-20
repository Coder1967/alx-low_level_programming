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
	int u;
	int j;

	j = strlen(str) - 1;
	for (u = 0; u <= j; u++)
	{
		if (u % 2 == 0)
		{
		printf("%c", str[u]);
		}
		else
		{
			continue;
		}
	}
	
		printf("\n");
}
