#include "main.h"
#include <stdio.h>
/**
* _strncpy - concanteate strins togeter
* @dest: pointer1
* @src: pointer 2
* @n: number of char
* Return: char
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (*(dest + i) != '\0')
{
i++;
}
dest[i] = '\0';
while (j < n)
{
dest[j] = *(src + j);
j++;
}
return dest;
}
