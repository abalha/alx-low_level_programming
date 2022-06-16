#include "main.h"

/**
 * rot13 - rot13 encryption
 * Return: pointer of encripted file
 * @s: string
 */
char *rot13(char *s)
{
	char arr1[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";

	char arr2[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	int i = 0, j;

	while (s[i] != 0)
	{
		char c = s[i];

		for (j = 0; j < 52; j++)
		{
			if (c == arr1[j])
			{
				s[i] = arr2[j];
			}
		}
		i++;
	}
	return (s);
}
