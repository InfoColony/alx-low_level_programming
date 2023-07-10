#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function that create a two dimentional array
 * @width: An input to the function
 * @height: An input to the function
 * Return: return a pointer to a two dimenasional array
 */

int **alloc_grid(int width, int height)
{
	int i = 0;
	int **tar;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	tar = malloc(width * sizeof(int));
	if (tar == NULL)
		return (NULL);
	for (; i < width; i++)
	{
		tar[i] = malloc(height * sizeof(int *));
		j = 0;
		if (tar[i] == NULL)
		{
			for (; j < i; j++)
				free(tar[j]);
			free(tar);
			return (NULL);
		}
		for (; j < height; j++)
			tar[i][j] = 0;
	}
	return (tar);
}
