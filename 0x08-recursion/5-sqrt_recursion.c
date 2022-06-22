#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number to find squareroot.
 * Return: the square root of number n
 */
int _sqrt_recursion(int n)
{
	return (test(1, n));
}

/**
 * checker - checks the input number from n to the base
 * @n: number to be tested
 * @base: base number
 * Return: root of number base
 */
int test(int n, int base)
{
	if (n * n == base)
	return (n);
	if (n * n > base)
	return (-1);
	return (test(n + 1, base));
}
