#include "main.h"
/**
 * _strncat - function to concatenate string.
 * @dest: Destination value.
 * @src: original string  .
 * @n: Number bytes.
 * Return: dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (dest[count] != '\0')
	{
		count++;
	}
	while (count2 < n && src[count2])
	{
	dest[count] = src[count2];
		count++;
		count2++;
	}
	if (count2 < count)
	{
		dest[count] = src[count2];
	}
	return (dest);
}
