#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - Prints the sum of the two diagonals.
 * @a: Pointer diag.
 * @size: size.
 */

void print_diagsums(int *a, int size)
{

	int i, j, k = 0;

	for (; i < size; i++)
	{
		j += a[i * (size + 1)];
		k += a[(i + 1) * (size - 1)];
	}
	printf("%d, %d\n", j, k);
}
