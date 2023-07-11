#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* alloc_grid - coy strings
* @width: arg1
* @height: arg2
* 
* Return: pointer
*/
int **alloc_grid(int width, int height)
{
int **p, i;
int size = width * height;
if (size <= 0)
return (NULL);
p = (int **)malloc(width * sizeof(int *));
if (p == NULL)
return (NULL);
for (i = 0; i < width; i++)
{
p[i] = malloc(height * sizeof(int));
if (p[i] == NULL)
{
while (i > 0)
{
free(p[i]);
i--;
}
free(p);
}
}
return p;
}
