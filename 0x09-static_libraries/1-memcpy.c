#include "main.h"
/**
 * _memcpy - Function that copies memory area.
 * @dest: Destiny array copy.
 * @src: Source copy.
 * @n: Values numbers copy memory
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int num;

	for (num = 0; num < n; num++)
	{
	*(dest + num) = *(src + num);
	}

	return (dest);

}
