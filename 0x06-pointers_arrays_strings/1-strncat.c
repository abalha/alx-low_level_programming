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
	int i;
	int dest_val = 0;
	int src_val = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		src_val++;
	}
	for (i = 0; dest[i] != '\0'; i++)
	{
		dest_val++;
	}
	if (n > src_val)
	{
		n = src_val;
	}
	for (i = 0; i < n; i++)
	{
		dest[dest_val + i] = src[i];
		dest[dest_val + i] = '\0';
	}
	return (dest);
}
