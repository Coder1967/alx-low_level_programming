#include <stdio.h>
/**
 * _print_rev_recursion - function to reverse string
 * @s: variable 1
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		s++;
		_print_rev_recursion(s);
		s--;
		putchar(*s);
	}
}
