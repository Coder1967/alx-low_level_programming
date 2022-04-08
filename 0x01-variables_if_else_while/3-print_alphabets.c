#include<stdio.h>
#include<stdlib>
/**
 * main - Entry
 *
 * Return:always 0(success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	char alps;

	for (alps = 'A'; alps <= 'Z'; alps++)
	{
		putchar(alps);
	}
}

