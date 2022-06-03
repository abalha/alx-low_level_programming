#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char small;
	char capital;

	for (small = 'a'; small <= 'z'; ++small)
	{
		putchar(small);
	}
	for (capital = 'A'; capital <= 'Z'; ++capital)
	{
		putchar(capital);
	}

	putchar('\n');

	return (0);
}
