#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 *
 * followed by a new line
 *
 *@str: string passed as a parameter
 */

void puts2(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; ++i)
	{
		count++;
	}
	for (i = (count + 1) / 2; i < count; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
