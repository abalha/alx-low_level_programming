#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter
 * @str: string pointer to return
 * Return: NULL if str = NULL. On success the _strdup returns a pointer to the
 * duplicated string. It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *ptr = NULL;
	unsigned int n;
	unsigned int size = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (n = 0; str[n] != '\0'; n++)
	{
		size++;
	}
	ptr = malloc((size + 1) * sizeof(char));

	if (ptr != NULL)
	{
		for (n = 0; n < size; n++)
			ptr[n] = str[n];
	}
	else
	{
		ptr = NULL;
	}
	return (ptr);
}
