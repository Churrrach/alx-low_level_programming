#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* alloc_grid - gets the lenght
* @width: a pointer parameter
* @height: lenght
* Return: allo
*/
int **alloc_grid(int width, int height)
{
int **grid, i;
if (width <= 0 || height <= 0)
return (NULL);
grid =  (int **) malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
while (i >= 0)
{
free(grid[i]);
i--;
}
free(grid);
return (NULL);
}
}
return (grid);

}
