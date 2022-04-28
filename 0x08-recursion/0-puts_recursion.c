#include <stdio.h>
/**
 * _puts_recursion - function
 * @s: variable
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if ((*s) == '\0')
	{
		putchar('\n');
		return;
	}
	else
	{
		putchar(*s);

		s++;

		_puts_recursion(s);
	}
}

