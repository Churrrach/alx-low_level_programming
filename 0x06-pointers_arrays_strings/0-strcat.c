#include "main.h"
#include <stdio.h>
/**
* _strcat - concanteate strins togeter
* @dest: pointer1
* @src: pointer 2
* Return: char
*/
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
while (*(dest + i) != '\0')
{
i++;
}
while (*(src + j) != 0)
{
dest[i + j] = *(src + j);
j++;
}
dest[i + j] = '\0';
return (dest);
}
