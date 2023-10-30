#include <stdio.h>

#include <stdlib.h>

#include "main.h"
/**
 * free_grid - frees 2dim of an array
 * @grid: 2dim grid
 * @height: height dimen of grid
 * Description: frees grid's memory
 * Return: nothing(0)
 */

void free_grid(int **grid, int height)

{

	int i;

	for (i = 0; i < height; i++)

	{
	free(grid[i]);
	}
	free(grid);

}
