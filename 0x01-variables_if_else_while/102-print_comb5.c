#include <stdio.h>
#include <stdlib.h>

/**
 * main - the starting point of program
 *
 * for this project code are written in main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 99; ++i)
	{
	for (j = 0; j <= 99; ++j)
	{
	if ((i == 0 && j != 0) || (j > i))
	{
	putchar(i / 10 + '0');
	putchar(i % 10 + '0');
	putchar(' ');
	putchar(j / 10 + '0');
	putchar(j % 10 + '0');
	if (i == 98 && j == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
