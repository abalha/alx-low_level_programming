#include "main.h"
/**
 *_abs - Check absolute value
 * @num: An integre input
 * Description: This function returns absolute value of a number
 * Return: Absolut value of number num
 */
int _abs(int num)
{
	if (num >= 0)
		return (num);
	else
		return (num * -1);
}
