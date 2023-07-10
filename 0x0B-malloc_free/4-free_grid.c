#include "main.h"

/**
 * free_grid - Frees a 2-dimensional grid previously created by alloc_grid.
 * @grid: Pointer to the 2-dimensional grid.
 * @height: The height of the grid.
 */

void    free_grid(int **grid, int height)
{
        int     i;

        i = 0;
        while (i < height)
                free(grid[i++]);
        free(grid);
}
