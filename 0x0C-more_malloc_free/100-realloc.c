#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _realloc - reallocates old to new, set conditions from problem
 * returning dest w/ size of malloc new_size, set src as ptr
 * @ptr: pointer to memory prev alloc, must free end
 * @old_size: input old
 * @new_size: input new
 * Return: 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;

	if (new_size > old_size)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
