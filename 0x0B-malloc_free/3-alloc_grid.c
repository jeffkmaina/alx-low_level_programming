#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional
 * array of integers.
 * @width: width of array
 * @height: height of array
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (height <= 0 || width <= 0) /*validate input*/
		return (NULL);

	grid = malloc(height * sizeof(int *)); /*allocate memory for rows*/

	if (grid == NULL) /* validate memory*/
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int *)); /* allocate mem for column
							  * in each row
							  */
		if (grid[i] == NULL) /* validate memory*/
		{
			for (i = 0; i < height; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++) /* set array to zero*/
			grid[i][j] = 0;
	}
	return (grid);
}
