#include "main.h"
/**
 * _strchr - To locate one char c.
 * @s: Pointer array locate string.
 * @c: character c.
 *
 * Return: Null.
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	if (s[i] == c)
		return (&s[i]);
		else

	return ('\0');
}
