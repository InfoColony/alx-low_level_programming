#include <stdlib.h>
#include "main.h"

/**
 * free_grid - A function that frees memory of two dimensional array
 * @grid: the two dimensional array
 * @height: the height of the two dimesional array
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
