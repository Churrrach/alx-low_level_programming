#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _strdup - gets the lenght
* @str: a pointer parameter
* Return: pointer
*/
char *_strdup(char *str)
{
int i, j = 0;
char *s;
if (str == NULL)
return (NULL);
while (str[j] != '\0')
{
j++;
}
s = malloc(j *sizeof(char) + 1);
if (s == NULL)
return (NULL);
for (i = 0; i < j; i++)
{
s[i] = str[i];
}
s[i] = '\0';
return (s);
}
