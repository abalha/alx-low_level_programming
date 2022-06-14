#include <stdio.h>
#include "main.h"
/**
 * _strcpy - Function that copies the string pointed to by src.
 * @dest: Destination string.
 * @src: Source string.
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{

	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		dest[i] = src[i];
		if (src[i] == '\0')
		{
			break;
		}
	}

		return (dest);
}
