#include "main.h"
/**
 * print_last_digit - Check last digit
 * @numb: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of variabe numb
 */
int print_last_digit(int numb)
{
	int lastDigit = numb % 10;

	if (lastDigit < 0)
		lastDigit *= -1;

	_putchar(lastDigit + '0');

	return (lastDigit);
}
