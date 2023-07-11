#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - name os function
 * @str: pointe to string
 *
 * Return: pointe to the string
*/
char *_strdup(char *str)
{
char *p;
int i, size = 0;
while (str[size] != '\0')
{
size++;
}
if (size == 0)
return (NULL);
p = malloc(size * sizeof(char) + 1);
if (p == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
p[i] = str[i];
}
p[size] = '\0';
return p;
}
