#include "main.h"
/**
 * _strcmp - Funtion to compare between two string.
 * @s1: String one.
 * @s2: String two.
 * Return: zero is equal.
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}

	return (0);
}
