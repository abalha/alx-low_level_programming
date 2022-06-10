#include "main.h"
/**
 * print_diagonal - Draws a diagonal line using the \ character.
 * @size : The number of \ characters to be printed.
 */
void print_diagonal(int size)
{
	int row, ds;

	if (size > 0)
	{
		for (row = 0; row < size; ++row)
		{
			for (ds = 0; ds < row; ++ds)
				_putchar(' ');
			_putchar('\\');

			if (row == size - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
