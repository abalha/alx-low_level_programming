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

	while (dest[count++])
	{
		count2++;
	}
	for (count = 0; (src[count] && count) < n; count++)
	{
	dest[count2++] = src[count];
	}

	return (dest);
}
