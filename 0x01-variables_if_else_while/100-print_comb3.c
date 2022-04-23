#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return:Always 0(success)
 */
int main(void)
{
	int di;
	

	for (di = '01'; di <= '89'; di++)
	{

		putchar(num);

		if (di <'12' && di > '9' || di < '35' && di > '29' || di < '56' && di > '49' || di < '67' && di > '59' || di < '78' && di > '69' || di < '89' && di > '79' )
		
		{
			continue;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
		
	}
	putchar('\n');
	return (0);
}

		
	

