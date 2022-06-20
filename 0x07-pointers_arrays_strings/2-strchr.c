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
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
	if (*(s + index) == c)
	{
		return (s + index);
	}
	if (*(s + index) == c)
		return (s + index);

	return ('\0');
}
