#include "main.h"
/**
 * @c: The character to be checked.
 * _islower - Checks if a character is lowercas
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (1);
	else
		return (0);
}
