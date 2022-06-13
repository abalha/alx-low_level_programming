#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 *@s: string paas on funtion as parameter
 *
 */

void rev_string(char *s)
{
	int i, count = 0;
	char ch;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	for (i = 0; i < count; i++)
	{
		ch = s[i];
		s[i] = s[count - 1];
		s[count - 1] = ch;
		count--;
	}
}
