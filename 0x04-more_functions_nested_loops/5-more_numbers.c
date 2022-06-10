#include "main.h"
/**
 * more_numbers - Prints the numbers 0-14 ten times.
 */
void more_numbers(void)
{
	int row, column;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 14; ++column)
		{
			if (column > 9)
				_putchar((column / 10) + '0');
			_putchar((column % 10) + '0');
		}
		_putchar('\n');
	}
}
