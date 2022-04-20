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

	printf("%c", str[0]);


	for (u = 0; u <= 10; u++)
	{
		printf("%c", str[(u + 2)]);
	}
}
