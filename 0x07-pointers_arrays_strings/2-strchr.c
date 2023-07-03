#include <stdio.h>
#include "main.h"
/**
* _strchr - gets the lenght
* @s: a pointer parameter
* @c: a second pointer
* Return: chare
*/
char *_strchr(char *s, char c)
{
int i = 0;
while (*(s + i) != '\0')
{
if (*(s + i) == c)
{
return (s + i);
}
i++;
}
if (c == '\0')
{
return (s + i);
}
return (NULL);
}
