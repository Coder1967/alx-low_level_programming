#include <unistd.h>
/**
 * _putchar - function to print characters
 * @c: character to be printed
 * Return: print
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
