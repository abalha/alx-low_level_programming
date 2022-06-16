#include <main.h>
/**
 * rot13 - Function that capitalizes all words of a string.
 * @s: Cheack value s
 * Return: s.
*/
char *rot13(char *s)
{
	int i, n;
	char arr1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arr2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
	for (n = 0; arr1[n] != '\0'; n++)
	{
	if (s[i] == arr1[n])
	{
		s[i] = arr2[n];
		break;
	}
	}
	}
	return (s);
}
