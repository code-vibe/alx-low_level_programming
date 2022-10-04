#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Write a function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.Prototype:
 * void free_grid(int **grid, int height);
 * Note that we will compile with your alloc_grid.c file.
 * Make sure it compiles.
 *
 * @grid: multidimensional array of integers.
 * @height: height of the grid.
 *
 * Return: no return
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
