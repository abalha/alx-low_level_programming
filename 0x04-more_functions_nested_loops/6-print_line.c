#include "main.h"
/**
 * print_line - Drawing a line .
 * @size: The length of line per _.
 */
void print_line(int size)
{
	int line;

	if (size > 0)
	{
		for (line = 0; line < size; ++line)
			_putchar('_');
	}

	_putchar('\n');
}
