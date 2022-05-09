#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - function
 * @s1: variable
 * @s2: var 2
 * @n: var3
 * Return: result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int total = 0;
	int b = 0;
	int i = 0;
	int y = 0;
	int k = 0;
	char *p;

	i = strlen(s1);
	total += i;
	y = strlen(s2);
	total += y + 1;
	p = (char *) malloc(sizeof(char) * total);

	if (p == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < i; b++)
	{
		p[b] = s1[b];
	}
	if ((int)n < y)
	{
	for (b = i; b <= ((int) n + i); b++)
	{
		p[b] = s2[k];
		k++;
	}
	}
	else
	{
		for (b = i; b <= y + i; b++)
		{
			p[b] = s2[k];
			k++;
		}
	}
	p[b - 1] = '\0';
	return (p);
}

