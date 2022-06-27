#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: NULL for failure or 0/ neg height/ width
 */
int **alloc_grid(int width, int height)
{

	int **arr;
	int a, b;

	if ((height < 1) || (width < 1))
		return (NULL);
	arr = malloc(sizeof(int*) * height);
	if (arr == 0)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		arr[a] = malloc(sizeof(int) * width);
		if (arr[a] == 0)
		{
			for (b = 0; b < a; b++)
				free(arr[b]);
			free(arr);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			arr[a][b] = 0;
	}
	return (arr);
}
