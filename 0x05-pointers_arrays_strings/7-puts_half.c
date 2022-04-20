#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - function that cuts strings into halves
 * @str: variable that stres the string
 * Return: void of the
 */
void puts_half(char *str)
{
	int j = (strlen(str) / 2);
	int i;
	int l = strlen(str);

	if (l % 2 == 0)
	{
	for (i = j; i < l; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
	}
	else
	{
		j = (strlen(str) / 2) + 1;
		for (i = j; i < l; i++)
		{
			printf("%c", str[i]);
		}
		printf("\n");
	}
}

