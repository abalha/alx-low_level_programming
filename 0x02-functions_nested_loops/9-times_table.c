#include "main.h"
/**
 * times_table - print timetable
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int num1;
	int num2;
	int res;

	for (num1 = 0; numb1 <= 9; ++numb1)
	{
		for (numb2 = 0; numb2 <= 9; ++numb2)
		{
			res = numb1 * numb2;
			_putchar(res);
			_putchar(',');
			_putchar(' ');
			if (numb2 == 9)
				continue;
		}
		_putchar('\n');
	}
	return (0);
}
