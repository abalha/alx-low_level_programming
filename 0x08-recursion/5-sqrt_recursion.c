#include "main.h"
/**
  * _sqrt_recursion - function that calculates the sqrt of a number
  * @n: number to be calculated
  * Return: sqrt of number
  */
int _sqrt_recursion(int n)
{

	return (find_sqrt(0, n));

}
/**
  * find_sqrt - Calculates the sqrt of a number
  * @num: scale
  * @base: number to check
  * Return: -1.
  */

int find_sqrt(int num, int base)
{

	if (num * num == base)
		return (i);
	else if (num < base)
		{
		return (find_sqrt(num + 1, base));
		}
	else
		return (-1);

}
