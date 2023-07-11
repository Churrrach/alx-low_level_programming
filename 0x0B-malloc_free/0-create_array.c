#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* create_array - create new array
* @size: size of array
* @c: char
*
* Return: pointer to char
*/
char *create_array(unsigned int size, char c)
{
int *p;
if (size == 0)
return (NULL);
p = malloc(size * sizeof(char));
if (p == NULL)
return (NULL);
for (int i = 0; i < size; size++)
{
p[i] = c;
}
return (p);
}
