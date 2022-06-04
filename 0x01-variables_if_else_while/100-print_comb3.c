#include <stdio.h>
#include <stdlib.h>
/**
 * main -starting point for this project all code are in main
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; ++i)
	{
	for (j = '0'; j <= '9'; ++j)
	{

		if (i >= j)
		{
			continue;
		}
		putchar(i);
		putchar(j);

		if ( i!= '8' && j != '9')
		putchar(',');
		putchar(' ');

	}
	}
	putchar('\n');
	return (0);
}
