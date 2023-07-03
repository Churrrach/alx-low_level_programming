#include <stdio.h>
#include "main.h"
/**
* _memcpy - gets the lenght
* @dest: a pointer parameter
* @src: a second pointer
* @n: no of terms
* Return: void
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a = 0;
while (a < n)
{
dest[a] = src[a];
a++;
}
return (dest);
}
