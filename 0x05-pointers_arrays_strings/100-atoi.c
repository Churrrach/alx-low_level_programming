#include <stdio.h>
#include "main.h"
/**
* _atoi - gets the lenght
* @s: a pointer parameter
* Return: int
*/
int _atoi(char *s)
{
int i, max, half;
char first, last;
i = 0;
while (s[i] != '\0')
{
i++;
}
max = i - 1;
half = max / 2;
while (half >= 0)
{
first = s[max - half];
last = s[half];
s[half] = first;
s[max - half] = last;
half--;
}
return (i);
}
