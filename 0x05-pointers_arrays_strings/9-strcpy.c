#include <stdio.h>
#include "main.h"
/**
* _strcpy - gets the lenght
* @dest: destination
* @src: source
* Return: char with copy of a string
*/
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; *(src + i) != '\0'; i++)
{
dest[i] = *(src + i);
}
dest[i] = '\0';
return (dest);
}
