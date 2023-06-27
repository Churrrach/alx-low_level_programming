#include <stdio.h>
#include "main.h"
/**
* _strlen - gets the lenght
* @s: a pointer parameter
* Return: int value
*/
int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}
return (len);
}
