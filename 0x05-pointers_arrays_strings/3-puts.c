#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line
 *
 *@str: string passed on function as a pointer
 */

void _puts(char *str)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
