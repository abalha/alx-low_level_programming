#include "main.h"
/**
 * _strncpy - Funtion concatenating string.
 * @dest: destination value.
 * @src: source value.
 * @n: Number bytes
 * Return: dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i, src_lnt, last;

	src_lnt = 0;
	for (i = 0; src[i] != '\0'; i++)
		src_lnt++;

	if (n > src_lnt)
		last = src_lnt;
	else
		last = n;

	for (i = 0; i < last; i++)
		dest[i] = src[i];

	if (n > src_lnt)
	{
		for (i = src_lnt; i < n; i++)
			dest[i] = '\0';
	}

	return (dest);
}

