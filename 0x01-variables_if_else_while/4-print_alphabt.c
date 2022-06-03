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

	for (small = 'a'; small <= 'z'; ++small)
	{
		if ((small == 'e') || (small == 'q'))

		continue;

			putchar(small);
	}
	putchar('\n');

	return (0);
}
