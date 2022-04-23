#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strncpy - function that copies
 * @src: variable
 * @dest: variable2
 * @n: int variable
 * Return: value
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
