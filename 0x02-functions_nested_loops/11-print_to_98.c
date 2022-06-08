#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print natural number to 98
 * @n : input number
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
	do	{
		printf("%d, ", n);
		n++;
	}
		while (n <= 98);
	}
	else
	if (n > 98)
	{
	do	{
		printf("%d, ", n);
		n--;
	}
		while (n > 98);
	}
}
