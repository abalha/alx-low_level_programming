#include "main.h"
/**
 * string_toupper - Function that changes lowercase a Uppercase.
 * @s: pointer to string
 * Return: s.
*/
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
	}

	return (s);
}
