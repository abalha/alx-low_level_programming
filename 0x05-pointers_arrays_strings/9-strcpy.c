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

	if (dest == src || src == 0)
		return (dest);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
