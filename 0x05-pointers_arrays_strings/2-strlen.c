#include "main.h"

/**
 * _strlen - return the length of a String
 *
 * @s: string value
 *
 * Return: return value = ret
 */

int _strlen(char *s)
{
	int i;
	int ret = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		ret++;
	}
	return (ret);
}
