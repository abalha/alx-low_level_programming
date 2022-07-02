#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _calloc -function to allocate memory
 * @nmemb: array num
 * @size: size of ea array element
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int count;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	count = 0;
	while (count < nmemb * size)
	{
		ptr[count] = 0;
		count++;
	}
	return (ptr);
}
