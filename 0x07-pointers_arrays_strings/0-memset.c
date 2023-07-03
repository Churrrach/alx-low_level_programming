#include <stdio.h>
#include "main.h"
/**
* _memset - gets the lenght
* @s: a pointer parameter
* @b: a second pointer
* @n: no of terms
* Return: void
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a = 0;
while (a < n)
{
s[a] = b;
a++;
}
return (s);
}
