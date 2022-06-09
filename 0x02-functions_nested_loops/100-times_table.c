#include "main.h"
/**
 * print_times_table - Prints the times table
 *
 * @num: The value of the times table to be printed.
 */
void print_times_table(int num)
{
	int num1, num2, res;

	if (num >= 0 && num <= 15)
	{
	for (num1 = 0; num1 <= num; num1++)
	{
		_putchar('0');

	for (num2 = 1; num2 <= num; num2++)
	{
		_putchar(',');
		_putchar(' ');

		res = num1 * num2;

				if (res <= 99)
				_putchar(' ');
				if (res <= 9)
					_putchar(' ');

				if (res >= 100)
				{
					_putchar((res / 100) + '0');
					_putchar(((res / 10)) % 10 + '0');
				}
				else if (res <= 99 && res >= 10)
				{
					_putchar((res / 10) + '0');
				}
				_putchar((res % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
