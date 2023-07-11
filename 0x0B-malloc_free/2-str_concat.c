#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* str_concat - coy strings
* @s1: arg1
* @s2: arg2
*
* Return: pointer
*/

char *str_concat(char *s1, char *s2)
{
char *p;
int i, size_s1 = 0, size_s2 = 0, size;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[size_s1] != '\0')
{
size_s1++;
}
while (s2[size_s2] != '\0')
{
size_s2++;
}
size = size_s1 + size_s2;
p = malloc(sizeof(char) * size + 1);
if (p == NULL)
return (NULL);
for (i = 0; i < size_s1; i++)
{
p[i] = s1[i];
}
for (i = 0; i < size_s2; i++)
{
p[size_s1 + i] = s2[i];
}
p[size] = '\0';
return (p);
}
