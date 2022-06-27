#include <stdlib.h>
#include "main.h"

/**
 * str_concat - a function that concatenates two strings
 * @s1: pointer argument one
 * @s2: pointer argument two
 * Return: A returned pointer tha points to a newly allocated space in memory
 * which contains in the contents of s1, followed by the contents of s2, and
 * null terminated, otherwise return NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	int n1, n2, n3 = 0;
	char *ptr = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (n1 = 0; s1[n1]; n1++)
		;

	for (n2 = 0; s2[n2]; n2++)
		;

	ptr = malloc(sizeof(char) * (n1 + n2 + 1));
	if (ptr == NULL)
		return (NULL);

	for (n3 = 0; s1 && s1[n3]; n3++)
		ptr[n3] = s1[n3];
	ptr[n3] = '\0';

	for (n3 = 0; s2 && s2[n3]; ne++)
		ptr[n1 + n3] = s2[n3];
	ptr[n1 + n3] = '\0';

	return (ptr);
}
