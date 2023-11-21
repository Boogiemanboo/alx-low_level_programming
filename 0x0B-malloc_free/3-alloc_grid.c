#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Pointer to the 2D array, or NULL if it fails
 */
int **alloc_grid(int width, int height)
{
    int **grid, i, j;

    if (width <= 0 || height <= 0)
        return (NULL);

    /* Allocate memory for the rows */
    grid = malloc(height * sizeof(int *));
    if (grid == NULL)
        return (NULL);

    /* Allocate memory for the columns */
    for (i = 0; i < height; i++)
    {
        grid[i] = malloc(width * sizeof(int));

        if (grid[i] == NULL)
        {
            /* Free the allocated memory if allocation fails */
            for (j = 0; j < i; j++)
                free(grid[j]);
            free(grid);
            return (NULL);
        }

        /* Initialize the elements to 0 */
        for (j = 0; j < width; j++)
            grid[i][j] = 0;
    }

    return (grid);
}
