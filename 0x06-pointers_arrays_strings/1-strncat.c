#include "main.h"
#include <stdio.h>
/**
* _strncat - concanteate strins togeter
* @dest: pointer1
* @src: pointer 2
* @n: number of char
* Return: char
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (*(dest + i) != '\0')
{
i++;
}
while (*(src + j) != 0 && j < n)
{
dest[i + j] = *(src + j);
j++;
}
dest[i + j] = '\0';
return dest;
}
