#include "main.h"
/**
 * _strstr -  Function that locates a substring
 * @haystack: Pointer to find value.
 * @needle: Pointer to locate substring.
 *
 * Return: 0.
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j, index;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
	for (index = i, j = 0; *(needle + j) != '\0'; index++, j++)
	{
	if (*(needle + j) != *(haystack + index) || *(haystack + index) == '\0')
		break;
	}
		if (*(needle + j) == '\0')
			return (haystack + i);
	}
	return ('\0');
}
