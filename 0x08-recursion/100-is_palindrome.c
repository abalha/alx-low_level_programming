#include "main.h"
/**
 * is_palindrome - find a palindrome string
 * @s: string for check
 *
 * Return: 1 if is palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	char *ptr, *rev;

	ptr = s;
	while (*ptr != '\0')
	{
		++ptr;
	}
	--ptr;
	for (rev = s; ptr >= rev;)
	{
		if (*ptr == *rev)
	{
		--ptr;
		rev++;
	}
	else
		break;
	}
	if (rev > ptr)
	{
		return (1);
	}
	else
	return (0);
}
