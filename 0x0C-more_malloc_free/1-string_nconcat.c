#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat- concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes
 *
 * Return: a pointer to the newly allocated space in memory, otherwise if it
 * fails return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, index;
	char *str;

	i = 0;
	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + len1))
		len1++;
	while (*(s2 + len2))
		len2++;

	if (n >= len2)
		index = len2;
	else
		index = n;

	str = malloc((len1 + index + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		*(str + i) = *(s1 + i);
	for (i = len1; i < (len1 + index); i++)
		*(str + i) = *(s2 + i - len1);
	*(str + i) = '\0';

	return (str);
}
