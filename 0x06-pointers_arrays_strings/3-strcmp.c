#include <stdio.h>
#include "main.h"
/**
* _strcmp - function that copies a string
* @s1: s2
* @s2: s1
* Return: int
*/
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] == s2[i])
{
if (s1[i] == '\0' && s2[i] == '\0')
break;
i++;
}
return ((int)s1[i] - (int)s2[i]);
}
